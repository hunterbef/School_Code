#Hunter Befort
#1001181638
import numpy as np
import matplotlib.pyplot as mat


#function that takes in a matrix, finds the dot product between the vectors within the matrix,
    #finds the norms of the vectors, then finds the outer product of the norms to normalize the 
    #dot product then finds cosine similarity by dividing the dot product with the outer product
def function(matrix) :
    dotProduct = np.dot(matrix, matrix.T)
    vectorNorms = np.linalg.norm(matrix, axis = 1)
    normalize = np.outer(vectorNorms, vectorNorms)
    matrixSimilarity = (dotProduct / normalize)
    return matrixSimilarity

#fills a random matrix of size M = 10 and N = 5, then uses the function to find the similarity
matrix = np.random.rand(10, 5)
similarity = function(matrix)

#Creates the color map showing the similarity
mat.matshow(similarity, cmap = 'bwr')
mat.colorbar()
mat.show()