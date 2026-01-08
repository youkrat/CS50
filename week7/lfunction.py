""""
lambda functions- simple anonymous functions with no name

eg replacing isEven
def isEven(x):
    return x%2 == 0
"""
#print((lambda x: x%2 == 0)(4))
"""
def doTwice(n, fn):
    return fn(fn(n))

print(doTwice(3, lambda x: x**2))
"""
"""
#You can have a tuple in a tuple
#you can have different data types in a tuple
#tuples are immutable
b = (3.5,"ben", "mit", 5.0,(1,2))
print(type(b))
for i in range(5):
    print(b[i])

for j in range(2):
    print(b[4][j])

#iterates over each element, not index, of the tuple
for e in b:
    print(e)

#tuples can be used to change values without a temp variable
x = 1
y = 2
(x,y) = (y,x) 


#tuples can also be used to return more than one value from a function
def quotientAndRemainder(x, y):
    '''sig: int, int -> (int, int)
    Takes in x-num y-divisor and returns (quotient, remainder)
    '''
    q = x // y
    r = x % y
    return (q,r)

(quot, rem) = quotientAndRemainder(10,3)

print(f"Quotient is: {quot}")
print(f"Rem is: {rem}")

def charCounts(s):
    ''' sig: string -> (int,int)
    Return a tuple where the first element is the number of vowels
    in s and the second element is the number of consonants in s
    '''
    v = 0
    c = 0
    vowels = "aeiou"
    for e in s:
        if e in vowels:
            v += 1
        else: 
            c += 1
    return (v,c)

(vow, cons) = charCounts("takitakis")
print(f"Vowels: {vow}")
print(f"Consonants: {cons}")

#using the (*args) notation to take a variable number of arguments
def mean(*args):
    tot = 0
    for a in args:
        tot += a
    return tot/len(args)

print(mean(1,2,3,4,5,6))
print(mean(2,4,5))

"""

#a list, like a tuple can take different data types
#but, lists are mutable, you cna change the values by indexing

def sumAndProd(L):
    """sig: list -> (int,int)
    L is a list of numbers
    Return a tuple where the first value is the sum of all elements in 
    L and the second value is the product of all elements in L 
    """
    (sum, prod) = (0,1)
    for i in L:
        sum += i
        prod *= i
    return (sum, prod)

(summation, product) = sumAndProd([1,2,3,0.5])
print(f"Summation: {summation} Product: {product}")