int main()
{
	long long n = 0;
	long long i = 0;
	long long* arr = malloc(sizeof(long long) * n);
	scanf("%d", &n);
	if (n <= 2)
	{
		return 0;
	}
	arr[1] = 1;
	arr[2] = 1;
	for (i = 3; i < n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	printf("%d", arr[i - 1]);
	return 0;
}