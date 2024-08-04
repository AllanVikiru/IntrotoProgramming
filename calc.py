# functions in Python
global operand1, operand2 # global variables for use in more than 1 function

# declare function with "def", name function with add, set 2 parameters to the add function
def add(operand1, operand2):
    sum = operand1 + operand2 # sum is a local variable
    return sum

def subtract(operand1, operand2):
    diff = operand1 - operand2
    return diff

option = int(input("Enter an option\n1. Add\n2. Subtract\n"))
if option == 1:
    op1 = int(input("Enter the first operand: "))
    op2 = int(input("Enter the second operand: "))
    print(add(op1, op2)) # print the result of the add function by calling it (sum)
else:
    op1 = int(input("Enter the first operand: "))
    op2 = int(input("Enter the second operand: "))
    print(subtract(op1, op2))
