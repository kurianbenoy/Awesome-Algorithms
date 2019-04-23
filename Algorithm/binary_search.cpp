#include <bits/stdc++.h>
using namespace std ;

void findk(vector <int>& a) {
    int lo = 1, hi = a.size() - 1, mid ;
    while(lo < hi) {
        mid = (lo + hi + 1) / 2 ;
        if(a[mid] == 0)
            lo = mid ;
        else
            hi = mid - 1 ;
    }
    if(a[lo] == 0)
        printf("%d\n", lo) ;
    else
        printf("Array is all 1s\n") ;
}

int main() {
    int n ;
    scanf("%d", &n) ;
    vector <int> a(n + 1) ;
    for(int i = 1 ; i <= n ; i++)
        scanf("%d", &a[i]) ; //make sure that the first few elements are 0 and the next few are 1
    //note that we discard a[0] because we are considering a[1 .. n]
    findk(a) ;
}
