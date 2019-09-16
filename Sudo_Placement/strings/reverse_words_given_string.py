
#code
T = int(input())
while T>0:
    s = input()
    li = s.split('.')
    re = (li[::-1])
    res = '.'
    print(res.join(re))
    T -= 1
