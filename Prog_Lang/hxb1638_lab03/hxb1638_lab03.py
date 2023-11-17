#Hunter Befort
#1001181638
#10/14/2023
import os

def calculate(formula) :
    stack = []
    for token in formula.split() :
        if token.isdigit() :
            stack.append(int(token))
        else :
            var2 = stack.pop()
            var1 = stack.pop()
            if token == '+' :
                stack.append(var1 + var2)
            elif token == '-' :
                stack.append(var1 - var2)
            elif token == '*' :
                stack.append(var1 * var2)
            elif token == '/' :
                stack.append(var1 / var2)
    return stack[0]
    
def get_file() :
    dir = os.path.dirname(os.path.realpath(__file__))
    input = os.path.join(dir, 'input_RPN.txt')

    with open(input, "r") as file :
        lines = file.readlines()
    
    for line in lines :
        formula = line.strip()
        result = calculate(formula)
        print(result)

if __name__ == '__main__' :
    get_file()