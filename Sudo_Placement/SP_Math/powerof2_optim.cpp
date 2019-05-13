#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
			long long unsigned int N;
			cin>>N;
			if((64-__builtin_clzll(N)-1)==__builtin_ctzll(N)){
				cout<<"YES"<<endl;
			}
			else
				cout<<"NO"<<endl;
	}
}
