//inefficent solution of O(n^2) complexity
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, ar[1000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>ar[i];

	int best = 0 ;
	for(int a=0;a<n;a++){
		int sum = 0;
		for(int j=a;j<n;j++){
			sum += ar[j];
			best = max(best,sum);
			}
		}
	cout<<best<<"\n";
	return 0;
	}
