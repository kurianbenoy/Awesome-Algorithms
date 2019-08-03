// source: https://www.interviewbit.com/problems/min-steps-in-infinite-grid/
int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int len = A.size();
    int sum=0;
    for(int i=0;i<len-1;i++)
    {
    int a, b, c, d, X, y;
    a = A[i];
    b = B[i];
    c = A[i+1];
    d = B[i+1];
    X = abs(a-c);
    y = abs(b-d);
    sum += max(X,y);
    }
    return(sum);
}
