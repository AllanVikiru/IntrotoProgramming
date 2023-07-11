# use of match-case in Python i.e. switch selective structure (switch-case)

# this will only work in Python version 3.10 onwards! check your version by running the command 'python -v' in your machine's command prompt

day = int(input("Enter the day number of the week (between 1 and 7): "))

match(day):
    case 1:
        print("Day of the week is Monday")
        # no need for a break after each case unlike in C++
    case 2:
        print("Day of the week is Tuesday")
    case 3:
        print("Day of the week is Wednesday")
    case 4:
        print("Day of the week is Thursday")
    case 5:
        print("Day of the week is Friday")
    case 6:
        print("Day of the week is Saturday")
    case 7:
        print("Day of the week is Sunday")
    case _: # this is like 'default' in C++
        print("That is beyond me! There are only 7 days in a week.")
