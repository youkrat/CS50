"""x = 0
for i in range(10):
    x += 0.1
print(x == 1)
print(x, '==', 10*0.1)
"""
"""
#converting decimal to binary
num = int(input("Enter a number: "))
result = ""
is_neg = False
#representing a negative binary number with -(positive binary equivalent)...
if num  < 0:
    is_neg = True
    num = abs(num)

if num == 0:
    result = "0"
while num > 0:
#note string addition 
    result = str(num%2) + result
    num = num // 2

if is_neg:
    result = "-" + result

print(result)
"""

#Converting a base 10 decimal to binary decimal
x = 0.625

p = 0
while ((2**p)*x) % 1 != 0:
    print("Remainder = " + str((2**p)*x- int((2**p)*x)))
    p += 1

num = int(x*(2**p))

result = "" 
if num == 0:
        result = "0"
while num > 0:
#note string addition 
    result = str(num%2) + result
    num = num // 2

for i in range(p-len(result)):
     result = "0" + result

result = result[0:-p] + "." + result[-p:]

print("The binary representation of the decimal " + str(x) + "is " +str(result))