#include <iostream>
#include<cmath>
using namespace std;

int main() {
	//code
	int T,n,temp,sum=0,d=0;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>n;
	    temp = n;
	    while(n>0){
	        d = n%10;
	        sum += pow(d,3);
	        n = n/10;
	    }
	    if(temp == sum)
	        cout<<"Yes";
	    else
	        cout<<"No";
	}
	return 0;
}
