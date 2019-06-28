## Sorting

- comparing elementwise => maximum sum possible is usually O(n^2)

- Count sort is efficent with O(n) - creates a constant in this notation

- Sorting in cpp
```
vector <int> v = {4, 2, 5,3, 5, 8,3};
sort(v.begin(), v.end());
sort(v.rbegin(), v.rend()); //reverse

vector<tuple<int, int,int>> v;
v.push_back({2,1,5});
v.push_back({5,2,1});

sort(v.begin(), v.end())//tuple sort

bool comp(string a,string b){
	if(a.size() != b.size()) return a.size() < b.size();
	return a<b;
	}
sort(v.begin(), v.end(), comp); // sort by no of elements in strings

```


