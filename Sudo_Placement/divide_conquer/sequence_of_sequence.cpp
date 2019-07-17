#include<bits/stdc++.h>
using namespace std;

void get(int *a,int *b,int in,int j,int n,int m)
{if(in==n-1)
{
 ans=ans+(b[in]-j)+1;
 return;}

 for(int i=j;i<=b[in];i++)  //loop is trversing from j to b[in] as b[in] is maximum value it can have
 {                          //and j is value acc to last index of array and i am traversing all values  
 get(a,b,in+1,2*i,n,m);k

 }

return;


}


int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int m,n,sum=0;
		cin>>m>>n;
	// 5 3
	// (1,2,4) (1,2,5)
	// 6 3
	// (1,2,4) (1,2,5) (1,2,6) (1,3,6)
	// 15 2
	//(1,2), (1,3) ...(1,15), (2,4),....(2,15), (3,6)....(3,15), 
	

		int a[n], b[n];
		a[0] = 1;
		for(int i=1;i<n;i++)
		  a[i] = a[i-1]*2;

		for(int i=n-2;i>=0;i++)
		  b[i] = b[i+1]/2;

		ans = 0;
		get(a,b,0,n-1,m,n);

		cout<<ans<<endl;
	}
}
