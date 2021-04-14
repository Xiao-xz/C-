void revers(char* str)
{
	assert(str);
	//int len = strlen(str);
	//int left = 0;
	//int right = len - 1;
	//while (left < right)
	//{
	//	char tmp = str[left];
	//	str[left] = str[right];
	//	str[right] = tmp;
	//	left++;
	//	right--;
	//}
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[256] = { 0 };
	gets(arr);
	revers(arr);
	int i = 0;
	printf("%s\n", arr);
	return 0;
}