#include<bits/stdc++.h>
using namespace std;

int maxspan(int nums[], int n)
{
	int msum=0;
	for(int i=0;i<n;i++)
	{	
		int sum=0;
		for(int j=i+1;j<n;j++)
		{
			if(nums[i] == nums[j])
			{
				sum = (j-i)+1;
			}
		}
		if(msum<sum)
			msum = sum;
	}
	return msum;
}

int main()
{
	int n;
	int arr[1000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int a = maxspan(arr,n);
	cout<<a;
	return 0;
}
		
