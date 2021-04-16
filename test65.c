int main()
{
	char arr[1000] = { 0 };
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		arr[i] = -1 - i;
	}
	printf("%d\n", strlen(arr));
	return 0;
}