# 4. function to calculate the wages pay function 
def pay(hourly_wage, hours_worked):
    regular_hours = min(hours_worked, 40)
    overtime_hours = max(0, hours_worked - 40)

    regular_pay = regular_hours * hourly_wage
    overtime_pay = overtime_hours * (hourly_wage * 1.5)

    total_pay = regular_pay + overtime_pay
    return total_pay

wage=int(input("Enter the wage per hour: "))
hours=int(input("Enter the number of hours worked: "))
print(pay(wage,hours))
