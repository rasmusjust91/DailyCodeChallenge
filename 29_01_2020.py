'''
Implement an autocomplete system. That is, given a query string s and a 
set of all possible query strings, return all strings in the set that 
have s as a prefix.

For example, given the query string de and the set of strings 
[dog, deer, deal], return [deer, deal].

Hint: Try preprocessing the dictionary into a more efficient data 
structure to speed up queries.
'''

def auto_complete(query, lst):
    return [s for s in lst if s.startswith(query)]

assert auto_complete('de', ['dog', 'deer', 'deal']) == ['deer', 'deal']
print('Succes!')


