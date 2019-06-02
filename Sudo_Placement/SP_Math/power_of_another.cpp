#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int x,y,n;
	    cin>>x>>y;
	    if(x==1 && y==1)
	    {
	        cout<<1<<endl;
	    }
	    if(x==1 && y>1)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	    n = log(y)/log(x);
	    if(ceil(n)==floor(n))
	        cout<<1<<endl;
	    else
	        cout<<0;
	
	    }
	}
	return 0;
}
