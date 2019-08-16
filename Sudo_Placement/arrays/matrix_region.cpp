#include<bits/stdc++.h>
using namespace std;
#define M 1000
#define N 1000

int preProcess(int mat[M][N], int aux[M][N])
{

	for(int i=0;i<N;i++)
		aux[0][i] = mat[0][i];

	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
			aux[i][j] = mat[i][j] + aux[i-1][j];

	for(int i=0;i<M;i++)
		for(int j=1;j<N;j++)
			aux[i][j] += aux[i][j-1];

}

int sumQuery(int aux[M][N], int tli, int tlj, int rbi,
                                              int rbj)
{
    // result is now sum of elements between (0, 0) and
    // (rbi, rbj)
    int res = aux[rbi][rbj];

    // Remove elements between (0, 0) and (tli-1, rbj)
    if (tli > 0)
       res = res - aux[tli-1][rbj];

    // Remove elements between (0, 0) and (rbi, tlj-1)
    if (tlj > 0)
       res = res - aux[rbi][tlj-1];

    // Add aux[tli-1][tlj-1] as elements between (0, 0)
    // and (tli-1, tlj-1) are subtracted twice
    if (tli > 0 && tlj > 0)
       res = res + aux[tli-1][tlj-1];

    return res;
}

int main()
{
	int m, n;
	cin>>m>>n;
	
	int mat[M][N], aux[M][N];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>mat[i][j];

	preProcess(mat, aux);
	int tli = 2, tlj = 2, rbi = 3, rbj = 4;
   	cout << "\nQuery1: " << sumQuery(aux, tli, tlj, rbi, rbj);

	return 0;
}
