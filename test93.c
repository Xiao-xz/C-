int Fibonacci(int n) {
	// write code here
	long long i = 0;
	int* arr = malloc(sizeof(long long) * n);
	if (n <= 2)
	{
		return 0;
	}
	arr[1] = 1;
	arr[2] = 2;
	for (i = 3; i < n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[i - 1];
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", Fibonacci(n));
	return 0;
}