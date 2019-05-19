#include<iostream>
using namespace std;

int main()
{
	int T;
 	 int n;
	 int arr[1000];
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
				cout<<arr[i+1]<<" ";
			}
			else
				cout<<-1<<" ";
		}
		cout<<-1<<"\n";
	}
	return 0;
}

