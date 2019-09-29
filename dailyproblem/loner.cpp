long long findLoner(long long arr[],int n)
{
    //Your code here
    long long hashtable[10000];
    int k=0;
    for(int i=0;i<10000;i++)
    {
        hashtable[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        hashtable[arr[i]] += 1;
    }
    
    for(int i=0; i<n; i++)
    {
        if(hashtable[arr[i]] == 1){
            k =1;
            return(arr[i]);
        }
    }
       if(k==0)
        return(-1);
}
