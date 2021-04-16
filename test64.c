int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		//判断i的位数
		int tmp = i;
		int n = 1;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		}
		//计算每位数的n次方之和
		tmp = i;
		while (tmp)
		{
			sum += (int)pow(tmp % 10, n);
			tmp /= 10;
		}
		if (i == sum)
		{
			printf("%d ", sum);
		}
	}
	return 0;
}