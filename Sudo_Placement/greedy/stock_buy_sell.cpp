#include<bits/stdc++.h>
using namespace std;

class Intreval{
public:
	int buy;
	int sell;
};

int stockBuysell(int price[], int n)
{
	if(n==1)
		return 0;
	int count=0;

	Intreval sol[n/2 +1];
	int i=0;

	while(i <n-1){
		while((i<n -1) && (price[i+1] <= price[i]))
			i++;

		if(i==n-1)
			break;
		sol[count].buy = i++;

		while((i<n) && (price[i] >= price[i-1]))
			i++;

		sol[count].sell = i-1;
		count++;
	}

	if(count == 0)
		cout<<-1;
	else{
		for(int i=0;i<count; i++)
			cout<<"("<<sol[i].buy<<","<<sol[i].sell<<")"<<endl;
		}
	return 0;
}

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		int A[10000];
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>A[i];

		stockBuysell(A, n);
		cout<<endl;
		}
		return 0;
}

		
