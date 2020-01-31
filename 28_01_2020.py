'''
Implement a job scheduler which takes in a function f and an integer n, 
and calls f after n milliseconds.
'''

import time

def scheduler(f, n):
    time.sleep(n*10**(-3))    
    f()
    return None

def func():
    string = 'Hello World!'
    print(string)
    return None

scheduler(func, 10000)

    