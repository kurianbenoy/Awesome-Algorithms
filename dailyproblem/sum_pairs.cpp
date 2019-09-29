/* solution of FOrk CPP problem: https://practice.geeksforgeeks.org/contest-problem/sum-pair/1/
*/

void findPairs(int arr[], int n, int sum){

        int k=n-1;
            int j=0;
            bool flag=false;
            while(arr[j]<sum&&j<k)
            {
               if(arr[j]+arr[k]<sum)
               j++;
               else
               if(arr[j]+arr[k]>sum)
               k--;
               else{
                   cout<<arr[j]<<" "<<arr[k]<<" "<<sum<<endl;
                   flag=true;
                 //  break;

                 j++;
                 k--;
               }
            }
            if(flag==false)
            cout<<-1<<endl;

}
