#include "solution.h"

int main()
{
	int nums[] = { 2, 7, 11, 15 };
	int target = 26;
	int returnSize = 0;
	int numsSize = sizeof(nums) / sizeof(nums[0]);//计算数组元素个数
	for (int i = 0; i < 2;i++)
	{
		printf("%d\n", *(twoSum(nums, numsSize, target, &returnSize) + i));
	}
	getchar();
}