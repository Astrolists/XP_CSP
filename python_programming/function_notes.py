#XP 7TH FUNCTION NOTES

#def welcome():
 #   name = input ("What is your name?")
#    print(f"Hello, {name}!")

#print("this isnt my function")

#welcome()
#welcome()
#welcome()

#def add(number, number_two):
#    number += number_two
#    print(number)

#num_one = 12
#num_two = 400


import random

def roll(mod):
    return random.randint(1, 20) + mod

print(f"Agility: {roll(0)}\n")