'''
There exists a staircase with N steps, and you can climb up either 1 or 
2 steps at a time. Given N, write a function that returns the number of 
unique ways you can climb the staircase. The order of the steps matters.

For example, if N is 4, then there are 5 unique ways:

1, 1, 1, 1
2, 1, 1
1, 2, 1
1, 1, 2
2, 2
What if, instead of being able to climb 1 or 2 steps at a time, you could 
climb any number from a set of positive integers X? For example, 
if X = {1, 3, 5}, you could climb 1, 3, or 5 steps at a time.
'''

def simple_climb(N):
    count = 0
    for i in [1, 2]:
        N_ = N-i
        if N_ == 0:
            count+=1
        elif N_ > 0:
            count+=simple_climb(N_)
    return count


def advanced_climb(N, steps):
    count = 0
    for i in steps:
        N_ = N-i
        if N_ == 0:
            count+=1
        elif N_ > 0:
            count+=advanced_climb(N_, steps)

    return count


print(simple_climb(5))


print(advanced_climb(5, {1,2,3,4} ))