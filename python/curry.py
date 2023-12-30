def foo(x):
    def goo(y):
        return(x+y)
    return(goo)

def add(x,y):
    return(x+y)



num = foo(3)
print(num)
