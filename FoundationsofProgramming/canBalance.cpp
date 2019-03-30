#include<bits/stc++.h>
using namespace std;

int main()
{
	int n;
	int arr[100];
    cin>>n;

	for(int i=0;i<n;i++)
		cin>>arr[i];

	int l=0,r=n-1,lmax=0,rmax=0;

	for(int i=0;i<n;i++)
	{
		for(int lk=l;lk<=i;lk++)
		{
			lmax += lk;
		}

		for(int rk=r;rk>i;rk--)
		{
			rmax +=rk;
		}
		if(lmax == rmax)
		{
			cout<<"True";
		}
	}
			
