'''
Given an array of integers, find the first missing positive integer 
in linear time and constant space. In other words, find the lowest 
positive integer that does not exist in the array. The array can 
contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

You can modify the input array in-place
'''

def find_first_missing_positive_integer(array): 
    array = [i for i in sorted(array) if i > 0]

    if min(array) > 1:
        return 1
    else:
        for idx in range(1, len(array)):
            diff = array[idx] - array[idx-1]
            if diff > 1:
                return array[idx] + 1
        return array[idx] + 1

array = [3,4,-1,1]
print(find_first_missing_positive_integer(array))

array = [3, 2, 0]
print(find_first_missing_positive_integer(array))

array = [1, 2, 0]
print(find_first_missing_positive_integer(array))
