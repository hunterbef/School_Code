#Hunter Befort
#1001181638
#Python Version 3.12.0
import os

block_count = 0

#takes a line of the input, uses global counter to count if the line of the file when completely stripped
    #begins with a "{" or a "}" indicating whether a block has begun (increments) or ended (decrements)
def block_depth(input) :
    global block_count
    if input.strip().startswith('{') | input.rstrip().startswith('{') :
        block_count += 1
    elif input.strip().startswith('}') | input.rstrip().startswith('{') :
        if block_count > 0 :
            block_count -= 1

#reads file and sends it to the block counter once the lines are parsed
def get_file() :
    file = open('input.txt', 'r')
    lines = file.readlines()

    for line in lines :
        block_depth(line)
        print(block_count, line, end = '')
    
    print("")
    file.close()

if __name__ == '__main__' :
    get_file()