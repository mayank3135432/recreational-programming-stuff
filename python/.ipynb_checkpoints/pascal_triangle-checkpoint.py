def upsum(n):
    if(n==1):
        m = [1]
        print(m)
        return m
    elif(n==2):
        m = [1,2,1]
        print([1])
        print(m)
        return m
    L=[1]
    B=upsum(n-1)
    for i in range(1,n):
        L.append(B[i-1]+B[i])
    L.append(1)
    print(L)
    return L

