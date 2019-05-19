#include<bits/stdc++.h>
using namespace std;


// C++ Program for the binary  
// representation of a given number 
#include<bits/stdc++.h> 
using namespace std; 
  
void bin(unsigned n) 
{ 
    if (n > 1) 
        bin(n/2); 
    cout << n % 2; 
} 
  
int main()
{
	int T,n;
	cin>>T;
	for(int i=0; i<T; i++)
	{
		cin>>n;
		bin(n);
		cout<<"\n";
	}
}

