#include<bits/stdc++.h>
using namespace std;

int k=0;
for(int b=n/2;b>=1; b/=2)
{
	while(k+b<n && ar[k+b] <= x) 
		k += b;
}

if(array[k] == x){
	cout<<"found";
	}
