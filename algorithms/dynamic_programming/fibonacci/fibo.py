def fibo(n):
    Fib=[0]*n;
    Fib[0]=0;
    Fib[1]=1;
    for i in range(2,n):
        Fib[i]=Fib[i-1]+Fib[i-2]
    return Fib

if __name__ == "__main__":
    num = int(input('enter an natural number '))
    print(f"fbonacci till {num} is {fibo(num)}")
