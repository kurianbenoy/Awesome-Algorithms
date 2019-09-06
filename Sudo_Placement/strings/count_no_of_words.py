# solution of https://practice.geeksforgeeks.org/problems/count-number-of-words/0

OUT = 0
IN = 1 

def countwords(string):
    state = OUT
    wc = 0

    for i in range(len(string)):
        if(string[i]==' ' or string[i]=='\n' or string[i]=='\t'):
            state = OUT

        elif state == OUT:
            state = IN
            wc += 1

    return wc

if __name__ == "__main__":
    t = int(input())
    while t>0:
        st = countwords(input())
        print(st)
        t -= 1
