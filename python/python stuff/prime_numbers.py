# program to print prime numbers till n
n=int(input("enter n ", ))
list_of_prime=[2]

def CheckPrime(a):
    c = True
    for i in range(2,a):
        if (a%i)==0:
            # a is not prime 
            c=False        
            break
        else:
            # a is prime
            c=True

    if(c==True):
        print(n , "is a prime")
    else:
        print(n , "is not prime")
          
            
            
            # continues later
    
CheckPrime(n)
