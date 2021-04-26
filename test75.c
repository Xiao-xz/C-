char* my_strcat(char* dest,char* str)
{
	assert(dest && str);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "abc";
	char arr2[] = "def";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}