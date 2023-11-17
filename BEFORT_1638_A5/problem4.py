#Hunter Befort
#1001181638

#I DONT THINK THIS IS RIGHT OH MY GOODNESS,                     EATING A BURGER WITH NO HONEY MUSTARD, EATING A BURGER WITH NO HONEY MUSTARD
import numpy as np

def rotation_matrix(angle, axis) :
    theta = np.radians(angle)
    if(axis == 'x') :
        R = np.matrix([[1,                       0,                        0, 0],
                       [0, round(np.cos(theta), 2), round(-np.sin(theta), 2), 0],
                       [0, round(np.sin(theta), 2),  round(np.cos(theta), 2), 0],
                       [0,                       0,                        0, 1]])
    elif(axis == 'y') :
        R = np.matrix([[ round(np.cos(theta), 2), 0, round(np.sin(theta), 2), 0],
                       [                       0, 1,                       0, 0],
                       [round(-np.sin(theta), 2), 0, round(np.cos(theta), 2), 0],
                       [                       0, 0,                       0, 1]])
    elif(axis == 'z') :
        R = np.matrix([[round(np.cos(theta), 2), round(-np.sin(theta), 2), 0, 0],
                       [round(np.sin(theta), 2),  round(np.cos(theta), 2), 0, 0],
                       [                      0,                        0, 1, 0],
                       [                      0,                        0, 0, 1]])
    
    return R

T = np.matrix([[1, 0, 0, 0],
               [0, 1, 0, 0],
               [0, 0, 1, 0],
               [1, -2, 2, 1]])

T = np.dot(T, rotation_matrix(30, 'x'))

print(T)