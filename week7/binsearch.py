#Using bissection search for an extreme guessing game
#special case for decimal numbers between 0 and 1
"""
x = 0.5
epsilon = 0.001
num_guesses = 0
low = x
high = 1
guess = (high+low)/2

while abs(guess**2 - x) >= epsilon:
    if guess**2 < x:
        low = guess    
    else: 
        high = guess
    guess = (high + low)/2.0
    num_guesses += 1
    

print("Num_guesses =", num_guesses)
print(guess, "is close to square root of", x)

"""
"""
#cube bisection search
cube = 500
epsilon = 0.01
low = 0
high = cube
numGuesses = 0
guess = (high+low)/2

while abs(guess**3 - cube) >= epsilon:
    if guess**3 < cube:
        low = guess
    else:
        high = guess
    guess = (high+low)/2.0
    numGuesses += 1

print(f"Number of guesses: {numGuesses}")
print(f"{guess} is close to cube root of {cube}")
"""

#Newton-Rahpson- General appproximation algorithm to find
#roots of a polynomial in one variable

epsilon = 0.0000000000001
k = 25.0
guess = k/2.0
numGuesses = 0

while abs(guess*guess - k ) >= epsilon:
    numGuesses += 1
    guess = guess - (((guess**2)-k)/(2*guess))

print(f"Number of guesses: {numGuesses}")
print(f"Square root of {k} is about {guess}")