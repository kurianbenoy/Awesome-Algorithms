#include<bits/stdc++.h>
using namespace std;

int main()
{
  int T, n,count=0;
  cin>>T;
  while(T--)
    {
      vector<int> A;
      int t;
      cin>>n;
      for(int i=0;i<n;i++){
	cin>>t;
	A.push_back(t);
      }
		
	// 1 2 3 4 -1
      int sum=0, leftsum=0,f=0;

	for(int i=0;i<n;i++)
	{
	  sum += A[i];
	}
	for(int i=0;i<n;i++)
	  {
	    sum = sum -A[i];  
	  if(sum == leftsum){
	    f=1;
	    cout<<i+1<<endl;
	  }
	  leftsum += A[i];
	}
	
	if(f==0)
	  cout<<-1;
    }
  return 0;
}	  
