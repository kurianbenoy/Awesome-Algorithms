#include<iostream>
using namespace std;

int main()
{
	int T;
 	long int n;
	long int arr[10000];
	cin>>T;
	for(int i=0; i<T; i++)
	{
		cin>>n;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		
		for(int i=0; i<n-1; i++)
		{
			if(arr[i] > arr[i+1])
			{
				arr[i] = arr[i+1];
			}
			else
				arr[i] = -1;
		}
		arr[n-1] = -1;
		
		//print the array
		for(int i=0; i<n; i++)
		{	
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
