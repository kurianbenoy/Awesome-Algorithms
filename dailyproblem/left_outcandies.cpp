#include<bits/stdc++.h>
using namespace std;

int main()
{
	int no, n, m;
	cin>>no;
	while(no--)
	{
		cin>>n>>m;
		int l = (n*(n+1)/2);
//		m = m - l; only for small no
		m = (m -(m/l)*l);
		
		for(int i=1;i<=n;i++)
		{
			if(m-i>=0)
			  m = m-i;
			else
			  break;
		}
		cout<<m<<"\n";
	}
	return 0;
}
