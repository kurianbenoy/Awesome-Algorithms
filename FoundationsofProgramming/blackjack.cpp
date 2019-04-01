// Testing - blackjack problem
#include<bits/stdc++.h> 
using namespace std;


int blackjack(int a, int b)
{
	int greatest = max(a,b);
	if(greatest < 21)
	{
		cout<<greatest;
	}
	
	else
	{
		if(greatest == a)
			cout<<b;
		if(greatest == b)
			cout<<a;
	}	
return 0;
}

int main()
{
    int a, b;
	cin>>a>>b;
	blackjack(a, b);
	return 0;
}
