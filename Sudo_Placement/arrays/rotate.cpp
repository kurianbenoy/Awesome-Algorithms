#include<iostream>
using namespace std;

void leftRotatebyone(int arr[], int n)
{
	int temp = arr[0],i;
	for(i=0; i<n-1; i++)
		arr[i] = arr[i+1];
	arr[i] = temp;
}

void leftRotate(int arr[], int d, int n)
{
	for(int i=0; i<d; i++)
		leftRotatebyone(arr,n);
}
int main()
{
	int T;
	long int n,d;
	int A[1000000];
	for(int i=0; i<T; i++)
	{
		cin>>n>>d;
		for(int i=0; i<n; i++)
			cin>>A[i];
		leftRotate(A, d, n);
		
		//print elements
		for(int i=0; i<n; i++)
			cout<<A[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
