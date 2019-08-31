#include<bits/stdc++.h>
using namespace std;

int _lis(int arr[], int n, int *max_ref)
{
	if(n==1)
		return 1;
	
	int res, max_ending_here = 1;

	for(int i=1; i<n;i++)
	{
		res = _lis(arr, i, max_ref);
		if(arr[i-1] < arr[n-1] && res+1 > max_ending_here)
			max_ending_here = res + 1;
	}

	if(*max_ref < max_ending_here)
		*max_ref = max_ending_here;
	
	return max_ending_here;
}

int lis(int arr[], int n)
{
	int max =1;
	_lis(arr, n, &max);
	return max;

}

int lisdp(int arr[], int n)
{
	int list[n];
	list[0] = 1;

	for(int i=0;i<n;i++)
	{
		list[i] = 1;
		for(int j=0;j<i;j++)
			if(arr[i] > arr[j] && list[i]<list[j] +1)
				list[i] = list[j] +1;
		}
	return *max_element(list, list+n);
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		int arr[1000];
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>arr[i];

		int res = lisdp(arr,n);
		cout<<res<<endl;
		}
	return 0;
	}

