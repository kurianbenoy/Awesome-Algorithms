#include<bits/stdc++.h>
using namespace std;

void keypairs(vector<int> a, int n, int k)
{
	unordered_set<int> s;
	int l=0;
	for(int i=0;i<n;i++)
	{
		int temp = k - a[i];
	
	    if(s.find(temp) != s.end())
		{
			cout<<a[i]<<temp<<"gotcho";
			l = 1;
		}
	
//	for(auto x: s)
//		cout<<x<<endl;
	}
	cout<<l;
	if(l==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

int main()
{
	int n,t,k;
	vector<int> arr;
	//geline() //method of input
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		arr.push_back(t);
	}
	cin>>k;
	keypairs(arr, n, k);
/*	for(auto a: arr)
		cout<<a<<endl;*/
	return 0;
}

