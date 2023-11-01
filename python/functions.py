#Lambda functions
x=lambda a,b:a*b
print(x(5,6))
#Output 30

f=lambda x,y,z=0,w=0:print(x+2*y+3*z+4*w)
f(1,2)
#Here only x and y values are given and z and w values are 0 by default
f(1,2,3)
# Here we have passed all the arguments. So default value is not considered for third argument 
f(1,2,w=3)
#Here only one parameter has been given with keyword arguement 'w' which will be assigned



#write a function using lambda for assigned with default arguements and try x**3 +y**2 +5 assign x and y with default arguements
expression=lambda x=0,y=0:print(x**3+y**2+5)
expression()