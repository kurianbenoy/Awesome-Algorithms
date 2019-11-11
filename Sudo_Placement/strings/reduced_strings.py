import os
import random
import re
import sys

# Complete the superReducedString function below.
def superReducedString(s):
    c = []
    for i in s:
        if not c:
            c.append(i)
        else:
            if(c[-1]==i):
                c.pop()
            else:
                c.append(i)

    if not c:
        return("Empty String")
    else:
        return(''.join(c))


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = superReducedString(s)

    fptr.write(result + '\n')

    fptr.close()

