char* solve(char* str)
{
	int sz = strlen(str);
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		char ch = str[left];
		str[left] = str[right];
		str[right] = ch;
		++left;
		--right;
	}
	return str;
}
int main()
{
	char ch[1024] = { 0 };
	scanf("%s", ch);
	//字符串反转
	//输入"abcd" 输出"dcba"
	solve(ch);
	printf("%s\n", ch);
	return 0;
}