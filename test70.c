int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
	{
		return 0;
	}
	else
	{
		//strncat - 追加相同地址的字符串,所需参数(arr,arr,num)
		//strcat - 追加字符串,所需参数(arr1,arr2)
		strncat(str1, str1, len1);
	}
	//strstr - 在一组字符串中寻找相同的字符串,所需参数(arr1,arr2),返回值为地址;
	char* ret = strstr(str1, str2);
	if (ret==NULL)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int x = 0;
	int y = 0;
	int ret = is_left_move(arr1,arr2);
	if (ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}