int sum(int m, int n)
{
	if (m >= n)
	{
		return 0;
	}
	int sum = 0;
	int i = 0;
	for (i = m; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	printf("%d\n", sum(m, n));
	return 0;
}