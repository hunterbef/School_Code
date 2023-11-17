#Hunter Befort
#1001181638
import numpy as np
import matplotlib.pyplot as plt


#function that takes in a matrix, finds the dot product between the vectors within the matrix,
    #finds the norms of the vectors, then finds the outer product of the norms to normalize the 
    #dot product then finds cosine similarity by dividing the dot product with the outer product
def function(matrix) :
    dotProduct = np.dot(matrix, matrix.T)
    vectorNorms = np.linalg.norm(matrix, axis = 1)
    outerProduct = np.outer(vectorNorms, vectorNorms)
    cosineSimilarity = (dotProduct / outerProduct)
    return cosineSimilarity

#fills a random matrix of size M = 10 and N = 5, then uses the function to find the cosine similarity
matrix = np.random.rand(10, 5)
similarity = function(matrix)

#Creates the color map showing the similarity
plt.matshow(similarity, cmap = 'bwr')
plt.colorbar()
plt.show()