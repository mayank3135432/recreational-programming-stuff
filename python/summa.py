def sum_even_and_odd(A):
    Even=0
    Odd=0
    for x in A:
        if(x&1):
            Odd=Odd+x
        else:
            Even=Even+x
    return((Even,Odd))

print(sum_even_and_odd([4,1,2,3,5]))

