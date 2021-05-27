int MAX(int a, int b)
{
	if (a == b)
		return a;
	else
		return a > b ? a : b;
}
int main()
{
	int a = 0, b = 0;

	scanf("%d%d", &a, &b);
	printf("%d\n", MAX(a, b));

	return 0;
}