# password guess program usng python
#password can contain -  alphabets, numbers, symbols.

# we have to use string so-
import string
#we also use itertools.so-
import itertools
def guess_password(real):
    chars = string.ascii_lowercase + string.digits+string.ascii_uppercase
    # this makes chars capable of handling lowercase, uppercase, and numbers
    attempts = 0
    #coz initial attempts are 0


    #lets say password length is 12
    for password_length in range(1, 12):
        for guess in itertools.product(chars, repeat=password_length):
            attempts += 1
            guess = ''.join(guess)
            if guess == real:
                return 'password is {}. found in {} guesses.'.format(guess, attempts)
            
            print(guess, attempts)

print(guess_password('yash'))
#it can check around 6k-7.5k passwords per sec dependent on ur computer specs.it takes long time to guess 5 to 12 digit passwords.


