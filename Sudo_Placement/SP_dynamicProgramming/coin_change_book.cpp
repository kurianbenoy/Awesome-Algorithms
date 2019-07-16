#include<bits/stdc++.h>
using namespace std;

int value[N];
int ready[N];
int solve(int x)
{
	value[0]=0;
	for(int x=1;x<=n;x++)
	{
		value[x]= INF;
		for(auto c: coins){
			if(x-c>=0)
			{
				value[x] = min(value[x], value[x-c]+1);
			}
		}
	}
}
	

int main()
{
}
