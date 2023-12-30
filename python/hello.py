def check(A):
    m=max(A)
    B=[0]*(m+1)
    for i in A:
        if B[i]==0:
            B[i]=1
        else:
            print(i," is repeated")
    print("no duplicates")

arr=[3,1,3,2,4]
check(arr)