#include<iostream>
#include<string>
using namespace std;

void isPallindrome(char s[10000], int n)
{
	int l = 0;
	int h = n-1;
	
	while(h > l)
	{
		if(s[l++] != s[h--])
		{
			cout<<"No"<<endl;
			return;
		}
	}
	cout<<"Yes"<<endl;
}

int main()
{
	int T, n;
	cin>>T;
	while(T--)
	{
		cin>>n;
		char s[10000];
		for(int i=0;i<n;i++)
			cin>>s[i];
//		getline(cin,s);
		isPallindrome(s, n);
	}
	return 0;
}	
