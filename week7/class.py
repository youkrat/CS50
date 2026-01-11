"""
objects are a data abstraction that captures...
1. An internal representation through data attributes
2. An interface for interacting with objects
Through methods aka procedures or functions
Defines behaviours but hides implementation
"""
"""
#creating the data type
class Coordinate(object):
    #define attributes here


    #defining how to create an instance of class
    #self allows you to create variables that belong to this class
    #self is a parameter to refer to an instance of the class without
    #having created one yet
    def __init__(self, xval, yval):
        self.x = xval
        self.y = yval

    #A method is just a function that works with this object type
    #self here is used to refer to the object you call the method on
    def distance(self, other):
        #'.' operator is used to access any attribute
        x_diff_sq = (self.x-other.x)**2
        y_diff_sq = (self.y-other.y)**2
        return (x_diff_sq + y_diff_sq)**0.5
    
    def toOrigin(self):
        '''reset the point back to origin'''
        self.x = 0
        self.y = 0
    
    def __str__(self):
        return '<' + str(self.x)+ ',' +str(self.y)+'>'

#class circle which uses class coordinate for center
class Circle(object):
    def __init__(self, center, radius):
        if type(center) != Coordinate:
            raise ValueError
        
        if type(radius) != int:
            raise ValueError
        
        self.center = center
        self.radius = radius

    def isInside(self, point):
        '''Returns True if point is in self, false otherwise'''
        return point.distance(self.center) < self.radius
        

#Actual object.
center = Coordinate(2, 2)
point1 = Coordinate(2,3)
point2 = Coordinate(1,0)
my_circle = Circle(center, 2)


print(my_circle.isInside(point1))
print(my_circle.isInside(point2))


c = Coordinate(3,4)
origin = Coordinate(0,0)
#using the dot notation to access an attribute of instance c
print(c.x)
print(origin.x)
print(f"{Coordinate.distance(c,origin)} units from origin")
print(f"Distance is: {c.distance(origin)} units from origin")
c.toOrigin()
print(f"C set to origin({c.x}, {c.y})")


class SimpleFraction(object):
    '''A number represented as a fraction'''
    def __init__(self, n, d):
        self.num = n
        self.denom = d

    
    def times(self, oth):
        top = self.num*oth.num
        bottom = self.denom*oth.denom
        return SimpleFraction(top, bottom)
    
    def plus(self, oth):
        top = self.num*oth.denom + self.denom*oth.num
        bottom = self.denom*oth.denom
        return SimpleFraction(top,bottom)
    
    def getInverse(self):
        '''Returns a float representing 1/self'''
        value = self.num/self.denom
        return 1/value 
    
    def invert(self):
        '''sig: SimpleFraction -> SimpleFraction
        Sets self's num to denom and vice versa
        returns None'''
        (x, y) = (self.num, self.denom)
        (x, y) = (y ,x)
        return SimpleFraction(x, y)
    
    def __str__(self):
        '''defines how to print a fraction'''
        return str(self.num)+'/'+str(self.denom) #rempresents what you want to be printed out

f1 = SimpleFraction(3,4)
f2 = SimpleFraction(1,4)
print(f1.num)
print(f1.denom)
print(f1.plus(f2))
print(f1.times(f2))
print(f1.getInverse())
print(f1.invert())


"""
class Fraction(object):
    def __init__(self, n, d):
        self.num = n
        self.denom = d

    def __str__(self):
        if self.denom == 1:
            return str(self.num)
        elif self.denom == self.num:
            return str(1)
        else:
            return str(self.num) + '/' + str(self.denom)
    
    def __mul__(self, other):
        top = self.num*other.num
        bottom = self.denom*other.denom
        return Fraction(top,bottom)
    
    def __float__(self):
        return self.num/self.denom
    
    def reduce(self):
        def gcd(n,d): #function not method
            while d != 0:
                (d,n) = (n%d, d)
            return n
        if self.denom == 0:
            return None
        elif self.denom == 1:
            return Fraction(self.num, 1)
        else:
            greatest_common_divisor = gcd(self.num, self.denom)
            top = int(self.num/greatest_common_divisor)
            bottom = int(self.denom/greatest_common_divisor)
            return Fraction(top, bottom)
        
    
f1 = Fraction(3,21)
f2 = Fraction(4,3)
f3 = Fraction(3,4)
print(f3*f2)
print(f1.reduce())
print(f2)
print(float(f3)) 