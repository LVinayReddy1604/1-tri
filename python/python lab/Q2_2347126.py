#1. LIST
#Write a PYTHON script with List comprehension for the following
#A. Is the given list divisible by 3 or NOT?
import random
empid=[]
isin3=[]
isnotin3=[]
for i in range (1,20):
    empid.append(random.randint(1,100))
for j in empid:
    if j%3==0:
        isin3.append(j)
    else:
        isnotin3.append(j)
print("Employee Ids which are in 3rd frequency positions : ", isin3)
print("Employee Ids which are not in 3rd frequency positions: ", isnotin3)


#B. Square of even numbers in a list
squares=[]
for i in empid:
    if i%2==0:
        squares.append(i**2)
print("The square of even Id's is :", squares)


#C. Sum of digits of all EVEN numbers in a list
sum=0
for i in empid:
    if i%2==0:
        sum+=i
print("Sum of all even Ids is: ", sum)


#D. Remove duplicate numbers in a list
noduplicateid=[]
for i in empid:
    if i not in noduplicateid:
        noduplicateid.append(i)
print("The list with no duplicate Ids is: ",noduplicateid)


#2 Function for Dictionary 
empDOB={ "Kushal": "5 November 1988", "Narendran": "25 October 1987", "Justin": "10 September 1989", "Pranav": "30 April 1987", "Thangavignesh": "6 December 1988", "Punith": "11 October 1993" }
def birthDate(name): 
    print(empDOB.get(""+name+""))

name=input("enter the name of the employee")
birthDate(name)