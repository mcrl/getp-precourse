from sys import stdin

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

    ##########################

    return widest_level, max_width

def main():

    ### TODO: You are free to define the input value of the function as you wish. ###

    output = width_of_binary_tree(args)

    with open("output.txt", "w") as f:
        f.write(f"{output[0]} {output[1]}\n")

if __name__ == "__main__":
    main()
