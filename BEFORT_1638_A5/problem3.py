#Hunter Befort
#1001181638
import numpy as np

def rotation_matrix(angle, axis) :
    theta = np.radians(angle)
    if(axis == 'x') :
        R = np.matrix([[1,                       0,                        0],
                       [0, round(np.cos(theta), 2), round(-np.sin(theta), 2)],
                       [0, round(np.sin(theta), 2),  round(np.cos(theta), 2)]])
    elif(axis == 'y') :
        R = np.matrix([[ round(np.cos(theta), 2), 0, round(np.sin(theta), 2)],
                       [                       0, 1,                       0],
                       [round(-np.sin(theta), 2), 0, round(np.cos(theta), 2)]])
    elif(axis == 'z') :
        R = np.matrix([[round(np.cos(theta), 2), round(-np.sin(theta), 2), 0],
                       [round(np.sin(theta), 2),  round(np.cos(theta), 2), 0],
                       [                      0,                        0, 1]])
    
    return R

print("90 degrees x-axis:\n", rotation_matrix(90, 'x'))
print("\n90 degrees y-axis:\n", rotation_matrix(90, 'y'))
print("\n90 degrees z-axis:\n", rotation_matrix(90, 'z'))