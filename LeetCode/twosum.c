// 107 ms runtime
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int stoploop = 0;
    int* returnedArray = malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize && !stoploop; i++)
    {
        for (int j = i+1; j < numsSize && !stoploop; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                returnedArray[0] = i;
                returnedArray[1] = j;
                stoploop = 1;
            }
        }
    }
    
    return returnedArray;
}