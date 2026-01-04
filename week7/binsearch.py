#Using bissection search for an extreme guessing game
#special case for decimal numbers between 0 and 1
x = 0.49
epsilon = 0.001
num_guesses = 0
low = x
high = 1
guess = (high+low)/2

while abs(guess**2 - x) >= epsilon:
    if guess**2 > x:
        high = guess    
    else: 
        low = guess
    guess = (high + low)/2.0
    num_guesses += 1
    

print("Num_guesses =", num_guesses)
print(guess, "is close to square root of", x)