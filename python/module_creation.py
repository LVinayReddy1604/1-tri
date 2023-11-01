print("savings calculator")
rate=float(input("Please enter the interest rate: "))
years=float(input("Please enter the number of years: "))
init=float(input("Please enter the initial sum of money: Rs."))
# final=init*(1.0+(rate/years))
final=init*rate*years*0.01
print("After %d years the savings will be Rs. %.2f" %(years,final))