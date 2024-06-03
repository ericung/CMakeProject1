#include <stdio.h>
#include <stdlib.h>

void duplicateZeros(int* arr, int arrSize) {
	int* temp = malloc(sizeof(int) * arrSize);
	int i = 0;
	int j = 0;

	while (j < arrSize) {
		if (arr[i] == 0)
		{
			temp[j++] = 0;
			temp[j++] = 0;
		}
		else
		{
			temp[j++] = arr[i];
		}
		i++;
	}

	for (int i = 0; i < arrSize; i++) {
		arr[i] = temp[i];
	}
}

int main() {
	int nums[8] = { 1, 0, 2, 3, 0, 4, 5, 0 };

	duplicateZeros(&nums, 8);

	for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
	{
		printf("%d ",nums[i]);
	}

	return 0;
}
