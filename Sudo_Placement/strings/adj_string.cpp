#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2)
{
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	if(s1==s2)
		return 1;
	return 0;
}

int CountSteps(string s1, string s2, int size)
{
	int i=0, j=0;
	int result = 0;

	while(i<size)
	{
		j = i;
		while(s1[j] != s2[i]){
			j += i;
			}

		while(i<j){
			char temp = s1[j];
			s1[j] = s1[j-i];
			j -= 1;
			result += 1;
		}
		i += j;
		}
	return result;
}

int main()
{
	string s1;
	string s2;
	cin>>s1>>s2;

	int size = s2.size();
	cout<<size;
	if(isAnagram(s1, s2))
		cout<<CountSteps(s1,s2, size);
	else
		cout<<-1;
	
	return 0;
}


