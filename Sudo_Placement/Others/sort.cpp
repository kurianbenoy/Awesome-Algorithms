#include<bits/stdc++.h>
using namespace std;

template<class T>

void pqsort(T v[], int n)
{
    priqueue<T> pq(n);
    int i;
    for(i = 0; i < n; i++)
        pq.insert(v[i]);

    for(i = 0; i < n; i++)
        v[i] = pq.extractmin();
}
