"""Good morning! Here's your coding interview problem for today.

This problem was asked by Google.

Given the root of a binary search tree, and a target K, return two nodes in the tree whose sum equals K.

For example, given the following tree and K of 20

    10
   /   \
 5      15
       /  \
     11    15
Return the nodes 5 and 15"""

class Node:
    def __init__(self, value, left=None, right=None):
        self.value = value
        self.left = left
        self.right = right

    def __str__(self):
        return str(self.value)


def find_adders_to_k(tree, k):

    if (tree.left is not None) and (tree.right is not None):
        left = tree.left.value
        right = tree.right.value
        if left + right == k:
            return (left, right)
        else:
            return (
                find_adders_to_k(tree.left, k) or
                find_adders_to_k(tree.right, k)
                )

if __name__ == "__main__":
    tree = Node(10, Node(5), Node(15, Node(11), Node(15)))
    print(find_adders_to_k(tree, 26))
