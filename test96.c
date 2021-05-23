int singleNumber(int* nums, int numsSize) {
	int i = 0;
	int tmp = 0;
	for (i = 0; i < numsSize; i++)
	{
		tmp ^= nums[i];
	}
	return tmp;
}
int main()
{
	int nums[9] = { 2,2,1,3,4,3,4,5,5 };
	int numsSize = 9;
	int tmp = singleNumber(nums, numsSize);

	printf("%d\n",tmp);

	return 0;
}