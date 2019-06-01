#include<bits/stdc++.h>
using namespace std;
/* first idea in mind using two loops, traverse i,j and check for all arr[i] > arr[j]*/

int main()
{
	int T;
	int A[1000000];
	cin>>T;
	for(int i=0;i<T;i++)
	{
		vector<int> temp;
		int n,j,k=0;
		int A[1000000];
		cin>>n;
		for(i=0;i<n;i++)
			cin>>A[i];
		int max = A[n-1];
		temp.push_back(A[n-1]);
		for(i=n-1;i>=0;i--)
		{
			if(A[i]>max)
			{
			//	cout<<A[i]<<" ";
				temp.push_back(A[i]);
				max = A[i];
			}
		}
		reverse(temp.begin(), temp.end());
		for(int x: temp)
		{
			cout<<x<<" ";
		}
		cout<<endl;
	}
/*		flag =0;
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(A[i]<A[j]){
					flag = 1;
					break;
					}
			}
			if(flag == 0)
				cout<<endl<<"Variable"<<A[i]<<" ";
			cout<<i<<j<<endl;
		}
		cout<<endl;
*/
return 0;
}
