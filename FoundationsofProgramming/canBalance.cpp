// Solution of Canbalance problem
//https://techdevguide.withgoogle.com/paths/foundational/sequence-3/canbalance-problem-arrays-non-empty/#!
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int arr[100];
    cin>>n;

	for(int i=0;i<n;i++)
		cin>>arr[i];

	int l=0,r=n-1, lmax=0, rmax=0;

	for(int i=0;i<n;i++)
	{	
		lmax=0, rmax=0;
		for(int lk=l;lk<=i;lk++)
		{
			lmax += arr[lk];
		}

		for(int rk=r;rk>i;rk--)
		{
			rmax += arr[rk];
		}
//		cout<<lmax<<"-"<<rmax<<"\n";(for debugging)
		if(lmax == rmax)
		{
			cout<<"True";
		}
	}
	return 0;

}		
