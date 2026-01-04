"""x = 0
for i in range(10):
    x += 0.1
print(x == 1)
print(x, '==', 10*0.1)
"""

#converting decimal to binary
num = int(input("Enter a number: "))
result = ""
if num == 0:
    result = "0"
while num > 0:
    result = str(num%2) + result
    num = num // 2
    
print(result)