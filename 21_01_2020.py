'''
Given the root to a binary tree, implement serialize(root), 
which serializes the tree into a string, and deserialize(s), 
which deserializes the string back into the tree.

For example, given the following Node class

class Node:
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
The following test should pass:

node = Node('root', Node('left', Node('left.left')), Node('right'))
assert deserialize(serialize(node)).left.left.val == 'left.left'
'''
class Node:
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def serialize(tree):

    def recursive(tree):
        string_tree = {}
        for branch in [tree.left, tree.right]:
            if isinstance(branch, Node):
                string_tree[branch.val] = recursive(branch)
        return string_tree

    return {tree.val: recursive(tree)}

def deserialize(tree_dict):
    print(tree_dict)
    def recursive(tree_dict):
        if tree_dict  == {}:
            return None
        else:
            l = len(tree_dict)
            if l == 1:
                left = tree_dict.values()
                return Node('root', recursive(left), None)
            elif l == 2:
                left, right = tree_dict.values()
                return Node('root', recursive(left), recursive(right))



        # branches = list(tree_dict.values()) 
        # if len(branches)==0:
        #     return None
        # elif len(branches)==1:
        #     input = branches[0]
        #     return Node(list(input.keys())[0], recursive(input))
        # elif len(branches)==2:
        #     input0 = branches[0]
        #     input1 = branches[1]
        #     return Node(list(input1.keys())[0], recursive(input))



        return Node(list(tree_dict.keys())[0])

    return recursive(tree_dict)

node = Node('root', Node('left', Node('left.left')), Node('right'))
print(deserialize(serialize(node)))


