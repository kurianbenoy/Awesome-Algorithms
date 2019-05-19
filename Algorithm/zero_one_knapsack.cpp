#include<iostream>
using namespace std;
int max(int a, int b) { return (a>b)? a:b; }

int knapsack(int W, int wt[], int val[], int n)
{
	if(n==0 || W==0)
		return 0;
	
	if(wt[n-1] >W)
		return knapsack(W, wt, val, n-1);
	else 
		return max(val[n-1] + knapsack(W-wt[n-1], wt, val, n-1), 
                    knapsack(W, wt, val, n-1));
}

int main()
{
	int T;
	int v[1000];
	int wt[1000];
	int W,n;
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>n;
		cin>>W;
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		for(int i=0;i<n;i++)
			cin>>wt[i];
		printf("%d", knapsack(W, wt, v, n));
		}
		cout<<"\n";

return 0;
} 
