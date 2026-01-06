def isEven(x):
    """Assumes: x, a positive int 
    Returns True if i is even otherwise False"""
    if x%2 == 0:
        return True
    else: 
        return False

def divBy(n, d):
    """n and d are ints > 0
    Returns True if d divides n evenly and False otherwise"""
    return n%d == 0

def sumOdd(a,b):
    """a and b are ints >0
    Returns sum of odd integers from a to b (inclusive)"""
    sum = 0
    for i in range(a, b+1):
        if not isEven(i):
            sum += i
    return sum
            
def bisectionRoot(x):
    """x is a positive integer >= 1
    Returns the square root of x using binary search ~0.001"""
    epsilon = 0.001
    low = 0
    high = x
    ans = (high+low)/2.0
    while abs(ans**2 - x) >= epsilon:
        if ans**2 < x:
            low = ans
        else:
            high = ans
        ans = (high+low)/2.0
    return ans

def countNumsWithSqrtCloseTo(n, epsilon):
    """n is an int > 2
    epsilon is a positive number < 1
    Returns how many integers have a square root within epsilon of n"""
    num = 0
    x = ((n-epsilon)**2)//1
    final = ((n+epsilon)**2)//1

    for i in range(int(x), int(final)):
        num += 1
    return num
        
    
    
"""
Using functions as objects
"""                       
myFunc = isEven
print(isEven(2))       

"""
Using functions as parameters

"""
def calc(op,x,y):
    return op(x,y)

def add(a,b):
    return a + b

def div(a,b):
    if b != 0:
        return a/b
    print("Denominator was zero")

print(calc(add, 2, 3))