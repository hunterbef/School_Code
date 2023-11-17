#Hunter Befort
#1001181638
import numpy as np
import sympy as sp

arrayA = np.array([[3, 8, -5], 
                   [3, -6, -7], 
                   [3, 4, 2]])

arrayB = np.array([-1, -1, 3])

#Part a) Compute the reduced echelon form of A and convert result back to a numpy array
echelonA = (sp.Matrix(arrayA)).rref()
echelonA = np.array(echelonA[0])
print("\nPart a) solution:\nreduced echelon form:")
print(echelonA)


#Part b) Find the column space of A
colSpaceA = sp.Matrix(arrayA).columnspace()
print("\nPart b) solution:\ncolumn space:")
print(colSpaceA)


#Part c) Solve the matrix equation Ax = b
equationA = np.linalg.solve(arrayA, arrayB)
print("\nPart c) solution:\nAx = b:")
print(equationA)


#Part d) compute Nul A
nulA = (sp.Matrix(arrayA)).nullspace()
print("\nPart d) solution:\nNul A:")
print(nulA)