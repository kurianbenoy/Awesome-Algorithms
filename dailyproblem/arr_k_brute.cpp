#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> arr;
		int n,k,t;
			cin>>n;
				for(int i=0;i<n;i++)
					{
							cin>>t;
							arr.push_back(t);
					}
		cin>>k;
		
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[i]+arr[j]==k)
				{
					cout<<"["<<arr[i]<<arr[j]<<"]";
				}
			}
		}
	return 0;
}
