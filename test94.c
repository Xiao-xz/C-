char* judge(char* str) {
	// write code here
	int left = 0;
	int right = strlen(str);
	if (right < 2)
	{
		return "true";
	}
	while (left <= right)
	{
		if (str[left] != str[right - 1])
		{
			return "false";
		}
		left++;
		right--;
	}
	return "true";
}
int main()
{
	char str[1024] = { 0 };
	scanf("%s", str);
	char* ch = judge(str);
	printf("%s\n", ch);
	return 0;
}