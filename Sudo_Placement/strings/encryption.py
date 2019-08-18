import math
import os

def encryption(s):
    s = s.replace(" ","")
    list_ = list(s.strip())
    #print(list_)
    l = math.sqrt(len(list_))
    r = math.floor(l)
    c = math.ceil(l)
    print(r,c)
    for i in range(c):
        print(s[i:c],' ')
    # new = []
    # for i in range(c):
    #     print(i*r)
    #     new.append(list_[i*r])

    # print(new)
    



if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')
    s = input()
    result = encryption(s)
    #fptr.write(result + '\n')
    #fptr.close()