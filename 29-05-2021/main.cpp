/*
Given a circular array, compute its maximum subarray sum in O(n) time. 
A subarray can be empty, and in this case the sum is 0.

For example, given [8, -1, 3, 4], return 15 as we choose the numbers 
3, 4, and 8 where the 8 is obtained from wrapping around.

Given [-4, 5, 1, 0], return 6 as we choose the numbers 5 and 1.
*/
#include <iostream>
#include <assert.h>

int maxSubarraySum(int *list, int length)
{
    int max_sum = 0;
    int running_sum = 0;
    int first_sum = 0;
    bool first = true;

    for (int i = 0; i < length; i++)
    {
        if (list[i] < 0)
        {
            if (first == true)
            {
                first_sum = running_sum;
                first = false;
            }

            max_sum = running_sum;
            running_sum = 0;
        }
        else
        {
            running_sum += list[i];
        }
    }
    running_sum += first_sum;
    if (running_sum > max_sum)
    {
        return running_sum;
    }
    return max_sum;
}

int main()
{
    int lst[] = {1, 2, 0, 1, -4, -3, 4};

    printf("%d", maxSubarraySum(lst, sizeof(lst) / sizeof(int)));

    return 0;
}
