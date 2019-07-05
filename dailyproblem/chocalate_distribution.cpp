/*An efficient solution is based on the observation that to minimize the difference, we must choose consecutive elements
 * from a sorted packet. We first sort the array arr[0..n-1], then find the subarray of size m with the minimum
 * difference between last and first elements.*/
 //chocolate distribution problems
 #include<bits/stdc++.h>
 using namespace std;

 int finddiff(int arr[], int n, int m)
 {
 	if(m==0 || n==0)
		return 0;

	sort(arr, arr+n);
	if(n<m)
		return -1;
	int min_diff = INT_MAX;
	int first=0, last=0;
	for(int i=0;i+m-1<n;i++)
	{
		int diff = arr[i+m-1] - arr[i];
		if(diff	 < min_diff)
		{
			min_diff = diff;
			first = i;
			last = i+m-1;
		}
	}
	return(arr[last] - arr[first]);
}

int main()
{
	int n;
	int m;
	cin>>n;
	cin>>m;
	int arr[1000000];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<finddiff(arr, n, m);
	return 0;
}
