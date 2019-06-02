#include<bits/stdc++.h>
using namespace std;

int lcs(char *X, char *Y, int m, int n)
{
	int L[m+1][n+1];
	int i, j;

	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i ==0 || j==0)
				L[i][j] = 0;
			else if(X[i-1] == Y[j-1])
				L[i][j] = L[i-1][j-1] + 1;
			else
				L[i][j] = max(L[i-1][j], L[i][j-1]);
		}
	}
	return L[m][n];
}


int max(int a, int b)
	{
		return  (a>b)? a: b;
	}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int m,n;
		char str1[200],str2[200];
		cin>>m>>n;
		cin>>str1;
		cin>>str2;
		m = strlen(str1);
		n = strlen(str2);
		printf("%d\n",lcs(str1, str2, m, n));
	}
	
	return 0;
}
		
