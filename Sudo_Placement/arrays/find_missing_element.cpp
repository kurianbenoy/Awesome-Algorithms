#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> A(n);
	vector<int> B(n-1);

	for(int i=0;i<n;i++)
		cin>>A[i];
	
	for(int i=0;i<n-1;i++)
		cin>>B[i];

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	for(int i=0;i<n;i++)
	{
		if(A[i] != B[i])
			cout<<A[i];
	}

	return 0;
}
		
