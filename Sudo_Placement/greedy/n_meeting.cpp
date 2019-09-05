#include<bits/stdc++.h>
using namespace std;

void printMaxActivities(int S[100000], int F[100000], int n)
{
	int i, j;
	i =0;
	printf("%d", i);

	for(j=1;j<n;j++)
	{
		if(S[j] >= F[i])
		{
			printf("%d", j);
			i = j;
		}
	}
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		int S[100000];
		int F[100000];
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>S[i];
		for(int i=0;i<n;i++)
			cin>>F[i];

		printMaxActivities(S, F, n);
	}
	return 0;
}

