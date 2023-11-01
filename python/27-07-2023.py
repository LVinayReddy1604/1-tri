def f(x,y):
    z=2*y
    return x+z

# f(1)

f(1,2)



def my_function(fname):
    print("Hello " + fname)

my_function("thanga")



def g():
    print("Hellow world")

# g(a)
g()



def f():
    print("Have a nice day")
    return 1

f()+f()+1



def f():
    print("Enter f")
    print("Leave f")



def g():
    print("enter g")
    f()
    print("leave g")
f()
g()



def my_function(child1,child2,child3):
    print("Age of your youngest child is " , child1)

my_function(child3=12, child1=8,child2=10)



def sum(a=0,b=0,c=0):
    return a + b + c

sum(1,2)
sum()
sum(1,2,3)
#sum(1,2,a=3)



def my_function(*kids):
    print("The youngest child is" , kids[2])

my_function("sun","moon","star")
my_function(1,2,3)



def my_function(**name):
    print("Last name is " + name['lname'])
