#include<bits/stdc++.h>
using namespace std;

void productArray(int arr[], int n)
{
	int i, temp = 1;
	int *prod = new int[(sizeof(int)*n)];

	memset(prod, 1, n);

	for(i=0;i<n;i++)
	{
		prod[i] = temp;
		temp *= arr[i];
	}

	temp = 1;

	for(i=n-1; i>=0;i--)
	{
		prod[i] *= temp;
		temp *= arr[i];
	}

	for(i=0;i<n;i++)
		cout<<prod[i]<<" ";
	
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int A[10000];
		for(int i=0;i<n;i++)
			cin>>A[i];
		productArray(A, n);
		cout<<endl;
	}
}
