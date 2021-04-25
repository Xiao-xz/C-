char* my_strcpy(char* str1, const char* str2)
{
	assert(str1 &&str2);
	char* ret = str1;
	while (*str1++ = *str2++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "abc";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}