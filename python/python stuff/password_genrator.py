#program to genrate password/
# there are no ways to genrate special symbols



special_int=(input("enter special number iff u want: " , ))
special_char=(input("enter special alphabets if u want: " , ))



#password is made from all the stuff, so we use list as it can store diffrent types od data types
password1=[special_int,special_char]
print(password1 , "are your special characters in password")



# using "random mmodule" to genrate rando integer
import random
rand_int=random.randint(999,1000000)

#shuffeling the list now& and appending it with the rand_int
password1.append(rand_int)
random.shuffle(password1)
# this has random int +user walla password.



# now to genrate random string in python
import string
string_length=int(input("entered reqired length of random string:  " , ))
rand_string=''.join(random.choices(string.ascii_letters, k=string_length))
#this basikally genrated random string in lower and uppercase of given string length

#shuffeling the list now& and appending it with the rand_string
password1.append(rand_string)
random.shuffle(password1)


print("the genrated password is(which hass the entered special characters): " , password1)
