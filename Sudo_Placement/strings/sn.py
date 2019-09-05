def string_s(x):
    if len(x) <1:
        return ""
    count_ = 0
    result = ""
    for i in range(len(x)):
        count_ += 1
        if i+1>= len(x) or x[i] != x[i+1]:
            result += x[i]
            result += str(count_)
            count_ = 0
    if len(result) < len(x):
        return result
    else:
        return x

if __name__ == "__main__":
    tc = int(input())
    while tc>0:
        st = input()
        print(string_s(st))
        
        tc -= 1

