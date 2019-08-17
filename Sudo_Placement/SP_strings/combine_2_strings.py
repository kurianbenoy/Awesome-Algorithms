/*http://www.ardendertat.com/2011/10/10/programming-interview-questions-6-combine-two-strings/

*/

def isShuffle2(str1, str2, str3, cache=set()):
    if (str1, str2) in cache:
        return False

    if len(str1)+len(str2)!=len(str3):
        return False

    if not str1 or not str2 or not str3:
        if str1+str2==str3:
            return True
        else:
            return False

    if str1[0]!=str3[0] and str2[0]!=str3[0]:
        return False

    if str1[0]==str3[0] and isShuffle2(str1[1:], str2, str3[1:], cache):
            return True
    if str2[0]==str3[0] and isShuffle2(str1, str2[1:], str3[1:], cache):
            return True

    cache.add( (str1, str2) )

    return False
