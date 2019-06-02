#include<bits/stdc++.h>
using namespace std;

int lcs( char *X, char *Y, int m, int n ) 
{ 
   if (m == 0 || n == 0) 
     return 0; 
   if (X[m-1] == Y[n-1]) 
     return 1 + lcs(X, Y, m-1, n-1); 
   else
     return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n)); 
} 


int max(int a, int b)
	{
		return  (a>b)? a: b;
	}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int m,n;
		char str1[200],str2[200];
		cin>>m>>n;
		cin>>str1;
		cin>>str2;
		m = strlen(str1);
		n = strlen(str2);
		printf("%d\n",lcs(str1, str2, m, n));
	}
	
	return 0;
}
		