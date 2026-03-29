import itertools
# used to do oprations which otherwise will consume a lot of memory
for i in itertools.count(5,5):#this gives start number(i.e. the first 5) , and the skp number (2nd  five )
    if i==150:
        break
    else:
        print(i, end="\n")

# if u run this u will get an finite loop printing  multiples of 5 very, very fast. 
# till it reaches end(here 150) (the word end signifies the each output will end with \n  , and i=150 defines actual end)

# loop to print --- ABABAB.....
count=0
for j in itertools.cycle('AB'):#put string inside "cycle"
    if count >7:
        break
    else:
        print(j, end="\n")
        count+=1


# to print something repeatedly for desired number of times
 
# using repeat() to repeatedly print number
print(list(itertools.repeat("hukko", 4)))
#the "repeat " syntax-->   itertools.repeat("---thing needed to be printed, list, string, int, etc"), no. of times repeated


#repeat has other uses also example
from itertools import product
 
print("The cartesian product using repeat & product:")
print(list(product([1, 2], repeat=2)))#syntax---> list(product([thing1,thing2] , no. of times it repeats))
#note it prints cartesian product of thing1, thing2
print()
 
print("The cartesian product of the containers:")
print(list(product(['geeks', 'for', 'geeks'], '2')))
print()
 
print("The cartesian product of the containers:")
print(list(product('AB', [3, 4])))
    
#there are many functions in itertools. for others, refer "geeks for geeks/ itertools"
