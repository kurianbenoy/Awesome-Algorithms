#include <iostream>
using namespace std;

int main() {
	//code
	int T, n,s,temp=-1;
	int A[1000];
	cin>>T;
	for(int i=0; i<T; i++)
	{
	    cin>>n;
	   for(int i=0;i<n;i++)
	       cin>>A[i];
	   cin>>s;
	   for(int i=0; i<n; i++)
	   {
	       if(A[i] == s)
	            temp = i;
	       
	   }
	   cout<<temp+1;
	}
	return 0;
}
