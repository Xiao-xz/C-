int count_bit_one(int input)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((input >> i) & 1 == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int tmp = 0;
	int input = 0;
	scanf("%d", &input);
	tmp = count_bit_one(input);
	printf("count = %d\n", tmp);
	return 0;
}