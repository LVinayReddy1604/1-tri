import random
# 
# generate a random number between 1 to 100, and the user tries to guess it. Everytime the user enters a guess, the computer tells whether the guessed number is greater than, equal to or small than the answer. In case the guess is correct the game ends.
# a=input("enter a number:")
# b=random.randint(1,100)
# if(a==b):
#     print("Equal")
# elif(a<b):
#     print("Less")
# elif(a>b):
#     print("Greater")



answer=random.randint(1,100)
wins=False # Looping condition
while not wins:
    guess=int(input("Your Guess is: "))
    if guess == answer:
        print("You Win!")
        exit
    if guess>answer:
        print("The actual number is smaller than the guessed number")
    if guess<answer:
        print("The actual number is greater than the guessed number")
