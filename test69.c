void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	int i = 0;
	for (i = 0; i < k; i++)
	{
		char tmp = *arr;
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = tmp;
	}
}
int main()
{
	char arr[] = "abcdef";
	left_move(arr,2);
	printf("%s\n", arr);
	return 0;
}