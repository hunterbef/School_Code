#Hunter Befort
#1001181638
#Python 3.9.6
#macOS Ventura 13.5.1

import os

def dirSize(dir):
    sum = 0
    for entry in os.scandir(dir):           #parses through the directorty
        if entry.is_file():                 #if next item in directory is a file...
            sum += os.path.getsize(entry)       #adds the current file size to the total directory size
        elif entry.is_dir():                #if the next item in the directory is a subdirectory...
            sum += dirSize(entry.path)          #recurse through the subdirectory and add the total sub size to the total directory size
    return sum

print("Size of directory: " + str(dirSize(".")) + " bytes")