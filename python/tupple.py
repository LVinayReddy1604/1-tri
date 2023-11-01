e=("id","name","d","address","DOB","Joining_date") #tuple can have different data types as elements.
d=("Sales","Production","HR","Marketing","IT","Support_team")
s=(100000, 90000, 70000, 55000, 130000, 40000)
p=(123456, "12-04-2000", "Software Engineer", False)

#checking type of 
print(type(e))
print(type(d))
print(type(s))
print(type(p))

#using "in"
if "Sales" in d:
    print("Yes, Sales d is available")

# convert tupple to list 
list1=list(s)
print(list1)
print(type(list1))

#adding element to tupple
# append doesnt work for tupples with
list1.append(200000)


# ids in tupples
print(id(d))
print(d)
print(p)
d+=p
print(id(d))
print(d)

#concat 2 tupples
tuple1=d+s # append two tupples and store in tuple1
print(d+s) # append 2 tupples
print(s*3) # repeat the number of objects in the same tupple 3 times
print(len(d)) # find the length of the tupple
print(d[-2]) #print a particular tupple object
print(sum(s)) # find the sum of all nubers in tupple
print(max(s)) # find maximum number in tupples
#del s # delete tupple
print(s) # error is thrown as it is deleted

income=0
for x in s: # using for loop
    income+=x
print(income)


# using range
x=range(0,10,2) # (0,2,4,6,8)
for n in x: 
    print(n) 
print(type(x)) # displays type as "range"
print(x[-1:-3])
