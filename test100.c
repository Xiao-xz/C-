void pyramid(int n)
{
	int j = 0;
	int i = n;
	if (n <= 1)
	{
		printf(" %d \n",n);
		return;
	}
	for (i = 1; i <= n ; i++)
	{
		
		for (j = i; j < n ; j++)
		{
			printf(" ");
		}
		int a = i;
		while (a)
		{
			printf("%d ", i);
			a--;
		}
		printf("\n");
	}
}
int main()
{
	int n;

	scanf("%d", &n);
	pyramid(n);

	return 0;
}