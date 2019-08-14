#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
   { 
       if(a ==0)
           return b;
       if(b==0)
          return a;
      if(a==b)
          return a;
      if(a>b)
          return gcd(a-b,b);
      return gcd(a,b-a);
  }

void addFraction(int n1,int d1,int n2,int d2)
{
	int num = n1+ n2;
	int den = d1 + d2;
	int gc = gcd(num,den);
	cout<<(num/gc)<<"/"<<(den/gc);
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		addFraction(a,b,c,d);
	}
return 0;
}
