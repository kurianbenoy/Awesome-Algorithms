#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(long long unsigned int x)
{
    // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
    return (x && !(x & (x - 1)));
}

int main()
{
	int T;
	long long unsigned int n;
	bool b1;
	cin>>T;
	for(int i=0; i<T;i++)
	{
		cin>>n;
		b1 = isPowerOfTwo(n);
		if(b1==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
