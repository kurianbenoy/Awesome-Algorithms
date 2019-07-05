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
	map<int, int> m;
	vector<int> diff;
	for(int i=0;i<n;i++)
	{
		t = k -arr[i];
		m[arr[i]]=t;
	
	}

	for(auto x: m)
	{
		cout<<x.first<<" "<<x.second<<endl;
		cout<<m.count(k -x.first);
	}

/*	for(int i=0;i<n;i++)
	{
		cout<<arr.find(diff[i]);
	}*/
	/*for(int i=0;i<n;i++)
	{
		int diff;
		diff = k - arr[i];
		//binary search
		int a=0, b=n-1;
		while(a <=b)
		{
			int l = (a+b)/2;
			if(arr[l] == diff)
			
			{
				cout<<"["<<arr[k]<<","<<arr[i];
				}
			else
			{
			  if(arr[l]>k)
			   b = l-1;
			   if(arr[l]<k)
			   a =l+1;
			  }
		}
	}*/
	return 0;
	}
