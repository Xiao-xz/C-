
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
	//n=n&(n-1)
	//n
	//1101 n = 13
	//1100 n - 1 = 12
	//1100 n = 12
	//1011 n - 1 = 11
	//1000 n = 8
	//0111 n - 1 = 7
	//0000 n = 0

}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int tmp = count_bit_one(a);
	printf("count = %d", tmp);
	return 0;
}