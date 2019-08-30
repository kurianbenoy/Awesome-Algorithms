#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
//code
int t;
cin>>t;
unordered_map<int,int>mp;
while(t--) {
mp.clear();
int i,n,ans=0,prefix_sum=0;
cin>>n;
int a[n];
for(i=0;i<n;i++) {="" cin="">>a[i];
}
for(i=0;i<n;i++) {="" ans+="(i*a[i])-prefix_sum;" prefix_sum+="a[i];" if(mp[a[i]-1])="" {="" ans-="mp[a[i]-1];" }="" if(mp[a[i]+1])="" {="" ans+="mp[a[i]+1];" }="" mp[a[i]]++;="" }="" cout<<ans<<endl;="" }="" return="" 0;="" }="" <="" code="">
