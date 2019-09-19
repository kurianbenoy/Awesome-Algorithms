#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main() {
	//code
	int T;
	int n;
	cin>>T;
	while(T--)
	{
	    cin>>n;
	    vector<int> A(n);
	    vector<int> B;
	    vector<int> C;
	    for(int i=0;i<n;i++)
	        cin>>A[i];
	    
	    sort(A.begin(), A.end());
	    
	    for(int i=0;i<n;i++)
	    {
	        if(A[i]%2 ==0)
	            cout<<A[i]<<" ";
	 
	    }
	    
	     for(int i=0;i<n;i++)
	    {
	        if(A[i]%2 ==1)
	            cout<<A[i]<<" ";
	 
	    }
	    cout<<endl;
	}
	return 0;
}
