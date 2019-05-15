#include <iostream>     // std::cout
#include <algorithm>    // std::reverse
#include <vector>       // std::vector

int main () {
  std::vector<int> myvector;
  int n,T,temp;
  std::cin>>T;
  for(int i=0;i<T;i++)
  {
	std::cin>>n;	
  // set some values:
  for (int i=1; i<n; ++i)
	{
	 std::cin>>temp;
	 myvector.push_back(temp);   // 1 2 3 4 5 6 7 8 9
	}
  std::reverse(myvector.begin(),myvector.end());    // 9 8 7 6 5 4 3 2 1

  // print out content:
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
}
  return 0;
}
