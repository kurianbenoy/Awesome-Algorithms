#include<bits/stdc++.h>
using namespace std;

int diagonalcal(vector<int> ar, int n)
{
	int ml, mr;
	for(int i=0;i<n;i++)
	{
		ml += ar[i][i];
	}
	for(int i=n-1;i>0;i--)
	{
		mr += ar[i][i];
	}

	return(abs(ml-mr));
}

int main()
{
	int n;
	cin>>n;
	vector<int> ar;
	int temp;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		ar.push_back(temp);
	}
	int s = diagonalcal(ar,n);
	cout<<s<<endl;

	return 0;
	}
