#2nd sum
print(10**5)

#   square root of 10
import math as a
print(a.sqrt(10))

#x**2 -7x +10 = 0
import math
a=1
b=-7
c=10
x=math.sqrt(b**2-4*a*c)
y=-b
z=2*a
print(y+x/z)
print(y-x/z)


# log(2+sqrt5)
import math
a= math.sqrt(5)
print(math.log(2+a))

# area of a circle with radius 5.5
a=5.5
print(3.145*a**2)

#sin2.5
import math
print(math.sin(2.5))

#complex roots of x**2 -2x +10=0
import cmath
a, b, c = 1, -2, 10
x1 = (-b + cmath.sqrt(b**2 - 4*a*c)) / (2*a)
x2 = (-b - cmath.sqrt(b**2 - 4*a*c)) / (2*a)
print(x1)
print(x2)

import cmath
def find_roots(a, b, c):
    discriminant = b**2 - 4*a*c
    sqrt_discriminant = cmath.sqrt(discriminant)
    root1 = (-b + sqrt_discriminant) / (2*a)
    root2 = (-b - sqrt_discriminant) / (2*a)
    return root1, root2


# Coefficients of the quadratic equation: x^2 - 7x + 10 = 0
a = 1
b = -7
c = 10
root1, root2 = find_roots(a, b, c)
print( root1)
print( root2)

#4!
import math
a=math.factorial
print(a(4))

#cel to fahrenheit
import math
celsius=30
a=celsius
x=a*9/5+32
print(x)

#fah to cel
import math
fahrenheit=70
a=fahrenheit
x=(a-32)*5/9
print(x)

#meter to feet
import math
meter=4
a=meter
x=4*3.28084
print(x)

#feet to meter
import math
feet=10
a=feet
x=a*0.3048
print(x)

# acre to sq km
acre=100
a=acre
x=a*0.00405
print(x)

#sqkm to acre
import math
a=2
x=a*247.105
print(x)

#lbs to kg
a=5
x=a*0.453592
print(x)

#kg to lbs
a=10
x=a*2.20462
print(x) 