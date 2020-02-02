'''
The area of a circle is defined as πr^2. Estimate π to 3 decimal places 
using a Monte Carlo method.

Hint: The basic equation of a circle is x^2 + y^2 = r^2.
'''

from numpy.random import rand

def estimate_pi(N_trials = 1000000):
    x, y = rand(N_trials), rand(N_trials)
    r = x**2+y**2
    return round(4*len(r[r<1])/len(r), 3)
    
print(estimate_pi())