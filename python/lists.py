ename=["Praveen","Abhinav","Karthik","Bhadri","Laxman","Nirupam","Guhan"]
print(ename)
print(ename[1])
print(ename[3:5])
print(ename[-1])
print(ename[-5:-1])
print(ename[-5:])
print(ename[:-5])
print(ename[-1:-5])

#append(); adds an element to end of list
# clear(): remove all ements from list but list exists
#copy(): create a copy with same elements
# count(): returns numbers in a list
#extend(): (concatination of 2 lists) add the elements of a list(or any iterable), to the end of the current list
#index(): returns the index value of the first element in the list
# insert(): adds the elements into the particular position
# pop() : remove a particular element at the index in the list
#remove(): removes the element from the list

ename.append("Thanga")
print(ename)
list2=ename.copy()
print(list2)
print(ename.count("Thanga"))
list3=ename.extend(list2)
print(list3)

print(ename.index("Praveen"))
ename.insert(4,"Pramod") # insert the element at index 4
print(ename)
ename.pop(5) # remove the element at index 5
print(ename)
ename.remove("Thanga") # remove an element from the list
print(ename)
del ename[2] # delete using index 