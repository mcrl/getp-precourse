from sys import stdin
from collections import defaultdict, deque

class Node:
    def __init__(self, value):
        self.value = value
        self.level = 0
        self.left = None
        self.right = None
        self.num_left = 0       # Total number of left child nodes
        self.num_right = 0      # Total number of right child nodes
        self.idx = 0            # Index of column (must be unique)

def width_of_binary_tree(args):
    '''
    Calculate the widest level and the width of that level
    =================================================================================================
    Arguments:
        + args: something containing information about the input binary tree
    Outputs:
        + widest_level: widest level of given binary tree
        + max_width: widht of the widest level of given binary tree
    '''

    ### TODO: fill in here ###

    N, tree = args['N'], args['tree']

    ### Set level for each node (using BFS)
    tree[0].level = 1
    queue = deque([tree[0]])
    while queue:
        v = queue.popleft()
        if v.left:
            v.left.level = v.level + 1
            queue.append(v.left)
        if v.right:
            v.right.level = v.level + 1
            queue.append(v.right)

    ### While searching from leaf to root, Calculate
    ### the number of left child nodes and right child nodes of each node

    per_level = defaultdict(list)

    for node in tree:
        per_level[node.level].append(node)

    for level, nodes in sorted(per_level.items(), key=lambda x: x[0], reverse=True):
        for node in nodes:
            if node.left:
                node.num_left = node.left.num_left + 1 + node.left.num_right
            if node.right:
                node.num_right = node.right.num_left + 1 + node.right.num_right

    ### Calculate the index of each node using the index of the parent node and the number of child nodes
    tree[0].idx = tree[0].num_left
    queue = deque([tree[0]])

    while queue:
        v = queue.popleft()
        if v.left:
            v.left.idx = v.idx - v.left.num_right - 1
            queue.append(v.left)
        if v.right:
            v.right.idx = v.idx + v.right.num_left + 1
            queue.append(v.right)

    ### Find widest level and its width
    widest_level, max_width = 0, 0
    for level, nodes in sorted(per_level.items(), key=lambda x: x[0]):
        if len(nodes) == 1:
            width = 1
        else:
            indexes = sorted([nodes[i].idx for i in range(len(nodes))])
            width = max([indexes[i+1] - indexes[i] + 1 for i in range(len(nodes) - 1)])

        if width > max_width:
            widest_level = level
            max_width = width

    ##########################

    return widest_level, max_width

def main():

    N = int(stdin.readline())
    tree = [Node(0) for _ in range(N)]
    for i in range(N):
        value, left, right = map(lambda x: int(x)-1, stdin.readline().split())
        tree[i].value = value
        tree[i].left = tree[left] if left > 0 else None
        tree[i].right = tree[right] if right > 0 else None

    args = {'N': N, 'tree': tree}

    output = width_of_binary_tree(args)

    with open("output.txt", "w") as f:
        f.write(f"{output[0]} {output[1]}\n")

if __name__ == "__main__":
    main()
