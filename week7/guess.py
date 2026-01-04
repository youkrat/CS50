"""
#Guess and check square root with while loop

guess = 0

#flag if user input is negative
neg_flag = False

x = int(input("Enter an Integer: "))
if x < 0:
    neg_flag = True
"""
"""
for i in range(x):

while guess**2 < x:
    guess = guess + 1
if guess**2 == x:
    print("Square root of", x, "is", guess)
else:
    print(x, "is not a perfect square")
    if neg_flag:
        print("Just checkin... did you mean", -x, "?")
"""

"""
#Boolean flag - signal something happened in the code
secretNo = 7
found = False
for i in range(1,11):
    if i == secretNo:
        print(f"Found secret value to be {i}!")
        found = True

if not found:
    print("Secret number not found! ")
"""

#GUESS AND CHECK WITH WORD PROBLEMS
for alyssa in range(11):
    for ben in range(11):
        for cindy in range(11):
            total = (alyssa + ben + cindy == 10)
            twoLess = (ben == alyssa-2)
            twice = (cindy == 2*alyssa)
            if total and twoLess and twice:
                print(f"Alyssa sold {alyssa} tickets")
                print(f"Ben sold {ben} tickets")
                print(f"Cindy sold {cindy} tickets")