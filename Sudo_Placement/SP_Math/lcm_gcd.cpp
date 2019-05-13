#include<bits/stdc++.h>
using namespace std;

long int gcd(long a, long b)
{

	if(a ==0)
		return b;
	if(b==0)
		return a;
	if(a==b)
		return a;
	if(a>b)
		return gcd(a-b,b);
	return gcd(a,b-a);
}

int main()
{
	long int T;
	long int a,b,g1,g2;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>a>>b;
		g1 = gcd(a,b);
		g2 = (a*b)/g1;
		cout<<g2<<" "<<g1<<"\n";
	}
	return 0;
}
