#include<iostream>
#include<climits>
using namespace std;

int maxsubarray(int arr[], int n)
{
	int max_so_far = INT_MIN, max_end = 0;
	for(int i=0;i<n;i++)
	{
		max_end = max_end + arr[i];
		if(max_so_far < max_end)
			max_so_far = max_end;
		if(max_end < 0)
			max_end = 0;
	}
	return max_so_far;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n=0,max=0;
		int arr[100000];
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>arr[i];

		max = maxsubarray(arr, n);
		cout<<max<<endl;
	}
	return 0;
}
