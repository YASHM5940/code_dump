# fibonaci secuence nth term
a=int(input("eneter a natural number " , ))
b=0
c=1
def fibo(n):
    if n==0:
        print(1)
        return b
    elif n==1:
        print(1)
        return c
    else:
        for i in range(2,n):
            d=b+c
            b=c
            c=d
            return b
        print(b)
    
fibo(a)