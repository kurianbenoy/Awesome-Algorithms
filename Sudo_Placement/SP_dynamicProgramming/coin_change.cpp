#include<bits/stdc++.h>
using namespace std;

int count( int64_t S[], int64_t m, int64_t n ) 
{ 
	// table[i] will be storing the number of solutions for 
	// value i. We need n+1 rows as the table is constructed 
	// in bottom up manner using the base case (n = 0) 
	long long table[n+1]; 

	// Initialize all table values as 0 
	memset(table, 0, sizeof(table)); 

	// Base case (If given value is 0) 
	table[0] = 1; 

	// Pick all coins one by one and update the table[] values 
	// after the index greater than or equal to the value of the 
	// picked coin 
	for(int i=0; i<m; i++) 
		for(int j=S[i]; j<=n; j++) 
			table[j] += table[j-S[i]]; 
	
	for(int i=0;i<m;i++)
		cout<<table[i]<<"table"<<i<<endl;
	return table[n]; 
} 

int main()
{
	int64_t n,m;
	int64_t A[10000];
	cin>>n;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>A[i];
	}
	cout<<count(A, m, n);
	return 0;
}
