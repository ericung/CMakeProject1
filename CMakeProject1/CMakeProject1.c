// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "CMakeProject1.h"


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int* q = nums;
	for (int i = 0; i < numsSize; i++)
	{
		int* r = q+1;

		for (int j = i+1; j < numsSize; j++)
		{
			if (*q == target - *r)
			{
				int* result = malloc(sizeof(int) * 2);
				result[0] = i;
				result[1] = j;
				*returnSize = 2;
				return result;
			}
			r++;
		}

		q++;
	}

	*returnSize = 0;
	return NULL;
} 

int main() {
	const int numsLength = 3; // const never changes
	int nums[3] = {3,2,3};
	int target;
	int returnSize;

	target = 6;

	// 
	// &returnSize is the address of the variable, returnSize, in the main procedure
	int* result = twoSum(nums, numsLength, target, &returnSize);

	if (result != NULL)
	{
		printf("%d,%d",result[0], result[1]);
	}
	else
	{
		printf("NULL");
	}

	return 0;
}
