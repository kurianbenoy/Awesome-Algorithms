//You are given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. You need to find the other two numbers and print them in ascending order.
//link: https://practice.geeksforgeeks.org/problems/finding-the-numbers/0
#include<bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
	vector<int> v;
	unordered_map<int, int> mp;
	
	for(int i=0;i<2*n+2;i++)
		mp[arr[i]]++;

	for(auto x:mp){
//		cout<<x.first<<" "<<x.second<<endl;
		if(x.second %2== 1)
			v.push_back(x.first);		
	}
	sort(v.begin(), v.end());
	for(auto x:v)
		cout<<x<<" ";

	cout<<endl;
}

int main()
{
	int T,n;
	int A[1000000];
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>n;
		for(int i=0;i<2*n+2;i++)
		{
			cin>>A[i];
		}
		countFreq(A,n);
	}
	return 0;
}
