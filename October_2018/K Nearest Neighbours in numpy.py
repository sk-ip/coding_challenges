# K Nearest Neighbours Classifier from scratch (using only numpy as a scientific library.)


from numpy import *
import operator

def createDataset():
    # dummy dataset
    group = array([[1.0,1.1],[1.0,1.0],[0,0],[0,0.1]])
    labels = ['A','A','B','B']
    return group,labels

# calculating the Euclidian distance between the point and our data.

def classify(inX, dataSet, labels, k):
    datasetsize = dataSet.shape[0]
    diffmat = tile(inX, (datasetsize,1))-dataSet
    sqdiffmat = diffmat**2
    sq_distances = sqdiffmat.sum(axis=1)
    distances = sq_distances**0.5
    sorted_dist_indices = distances.argsort()
    class_count = {}
    for i in range(k):
        vote_label = labels[sorted_dist_indices[i]]
        class_count[vote_label] = class_count.get(vote_label,0)+1
    sorted_class_count = sorted(class_count.items(),key=operator.itemgetter(1), reverse=True)

    return sorted_class_count[0][0]

if __name__ =="__main__":
    createDataset()
    classify([0.0,0.0], group, labels, 3)


    




