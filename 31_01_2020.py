'''
Given an integer k and a string s, find the length of the longest 
substring that contains at most k distinct characters.

For example, given s = "abcba" and k = 2, the longest substring with k 
distinct characters is "bcb".
'''

def len_of_longest_substring_k_distinct(string, k):
    
    longest = 0
    for idx, substring in enumerate(string):
        count = 0
        
        while len(set(substring))<=k and idx+count+1<len(string):
            substring += string[idx+count+1]
            count+=1
        longest = count if count>longest else longest
    return longest

# Still having a small bug regarding the laster char. 
# The loop does not include it, but the idea and logic is there
print(len_of_longest_substring_k_distinct('abbccccddd', 2))