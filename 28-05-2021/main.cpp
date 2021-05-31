/*
This problem was asked by Triplebyte.

You are given n numbers as well as n probabilities that sum up to 1. Write a function to generate one of the numbers with its corresponding probability.

For example, given the numbers [1, 2, 3, 4] and probabilities [0.1, 0.5, 0.2, 0.2], your function should return 1 10% of the time, 2 50% of the time, and 3 and 4 20% of the time.

You can generate random numbers between 0 and 1 uniformly.
*/
#include <iostream>

int select_based_on_prob(int *values, float *prob, int lenght)
{
    float running_prob_sum = 0;
    float random_number = 0.6;
    for (int i = 0; i < lenght; i++)
    {
        running_prob_sum += prob[i];
        if (random_number < running_prob_sum)
        {
            return values[i];
        }
    }
    return -1;
}

int main()
{
    int values[] = {1, 2, 3, 4, 5, 6};
    float probs[] = {0.1, 0.2, 0.1, 0.4, 0.15, 0.05};
    int length = sizeof(values) / sizeof(int);

    std::cout << select_based_on_prob(values, probs, length) << std::endl;

    return 0;
}
