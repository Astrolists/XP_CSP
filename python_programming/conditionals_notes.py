#XP CSP 7TH CONDITIONALS NOTES

homework_is_done = "yes"

if homework_is_done == "no":
    print("Then go do it.")
else:
    print("You have permission to go have free time") 






grade = int(input("What is your grade?"))

if grade >= 90:
    if grade > 100:
        print("You cheated. Liar.")
    else:
        print(f"you have {grade}%, good job!")
elif grade >= 80:
    print(f"You are doing well! good job")
elif grade <= 79:
    print("get your grade up. fool.")



title = input("What is your title? \n")



if title == "Teacher":
    print("You are a teacher.")
elif title == "Teachers assistant" or title == "TA":
    print("You are a teaching assistant.")
else:
    print(f"hello, you are a {title}.")
    if grade >= 60:
        print("and you are passng the class. technically")