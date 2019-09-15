{
#Initial Template for Python 3
import atexit
import io
import sys
# Contributed by : Nagendra Jha
if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        m = int(input())
        print(countWays(m))

}
''' This is a function problem.You only need to complete the function given below '''
#User function Template for python3
def countWays(m):
    '''
    :param n: given value of n
    :return: Integer , ways to write n as sum of positive integers
    '''
    mod = 1000000007
    # code here
    return(m//2+1)
