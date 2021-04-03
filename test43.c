int count_bit_one(int a)
{
	int count = 0;
	while (a)
	{
		if (a % 2 == 1) {
			count++;
		}
		a = a / 2;
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int tmp = count_bit_one(a);
	printf("%d", tmp);
	return 0;
}