def minSubset(A):
    num = 0
    numma = 0
    while(1):
        numma += max(A)
        num += 1
        A.remove(max(A))
        if(sum(A)<numma):
            return num