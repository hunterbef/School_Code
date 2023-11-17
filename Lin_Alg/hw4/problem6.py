#Hunter Befort
#1001181638
import random
import numpy as np
import scipy.io as sio
import matplotlib.pyplot as plt


def plot_hands3d(ax, points, color, linewidth='3'):
    # Add bone connections
    bones = [(13, 11),
             (13, 12),
             (13, 1),
             (0, 1),
             (13, 3),
             (2, 3),
             (13, 5),
             (4, 5),
             (13, 7),
             (6, 7),
             (13, 10),
             (9, 10),
             (8, 9)]

    for connection in bones:
        coord1 = points[connection[0]]
        coord2 = points[connection[1]]
        coords = np.stack([coord1, coord2])
        ax.plot(coords[:, 0], coords[:, 1], coords[:, 2], c=color, linewidth=linewidth)
        
        
def normalize_hand(points):
    """Normalize the hand and center it on the palm"""

    center = points[-1]  # The palm keypoint
    scale_factor = 1.0 / (points.max(0)[0] - points.min(0)[0])
    norm_points = points.copy()
    norm_points -= center
    norm_points *= scale_factor

    return norm_points


def find_closest_match(x, dataset, loss_fn):
    """Searches the `dataset` for the sample that has the lowest
    error as compared with `loss_fn`.
    """
    # TODO: Implement a search based on the lowest loss as given by `loss_fn`
    min_idx = -1
    min_loss = np.inf
    for i in range(len(dataset)):
        sample = dataset[i]
        loss = np.min(sample)
        if loss < min_loss:
            min_idx = i
    return dataset[min_idx]


def loss_fn(x, y):
    return (x - y).sum()

        
# Load dataset
testing_mat = sio.loadmat("/Users/dillhoff/Downloads/test_joint_data.mat")
training_mat = sio.loadmat("/Users/dillhoff/Downloads/train_joint_data.mat")
#testing_mat = sio.loadmat("/Users/hunter/Documents/Fall 2023/CSE3380 - Linear Alg/hw4/test_joint_data.mat")
#training_mat = sio.loadmat("/Users/hunter/Documents/Fall 2023/CSE3380 - Linear Alg/hw4/train_joint_data.mat")
test_dataset = testing_mat['joint_uvd'][0]
train_dataset = training_mat['joint_uvd'][0]

# Show a sample
eval_joints = [0, 3, 6, 9, 12, 15, 18, 21, 24, 25, 27, 30, 31, 32]
train_dataset = train_dataset[:, eval_joints]
test_dataset = test_dataset[:, eval_joints]

sample = train_dataset[10000]

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
ax.view_init(-90, -90)
plot_hands3d(ax, sample, 'b')

x1 = train_dataset[0]
x2 = train_dataset[10000]

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
ax.view_init(-90, -90)
plot_hands3d(ax, x1, 'b')
plot_hands3d(ax, x2, 'r')

x1_norm = normalize_hand(x1)
x2_norm = normalize_hand(x2)

fig1 = plt.figure()
ax1 = fig1.add_subplot(111, projection='3d')
ax1.view_init(-90, -90)
plot_hands3d(ax1, x1_norm, 'b')
plot_hands3d(ax1, x2_norm, 'r')

# Search for the closest match
input_idx = 0
input_sample = test_dataset[input_idx]
match = find_closest_match(input_sample, train_dataset, loss_fn)

# Visualize Results
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
plot_hands3d(ax, input_sample, 'b')
plot_hands3d(ax, match, 'r')