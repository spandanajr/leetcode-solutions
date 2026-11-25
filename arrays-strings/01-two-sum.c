
#include <stdio.h>
#include <stdlib.h>

// Function to find two numbers whose sum equals target
int* twoSum(int nums[], int numsSize, int target, int* returnSize)
{
    int* result = (int*)malloc(2 * sizeof(int));

    *returnSize = 0;

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    free(result);
    return NULL;
}

// Main function for local testing
int main()
{
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int size1;

    int* result1 = twoSum(nums1, 4, target1, &size1);

    printf("Test Case 1:\n");
    if (result1 != NULL)
    {
        printf("[%d, %d]\n", result1[0], result1[1]);
        free(result1);
    }

    int nums2[] = {3, 3};
    int target2 = 6;
    int size2;

    int* result2 = twoSum(nums2, 2, target2, &size2);

    printf("Test Case 2:\n");
    if (result2 != NULL)
    {
        printf("[%d, %d]\n", result2[0], result2[1]);
        free(result2);
    }

    return 0;
}
