//逆序字符串
int my_strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
void Reverse_order(char* arr)
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if(my_strlen(arr+1)>=2)
		Reverse_order(arr + 1);
	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "abcdefg";
	Reverse_order(arr);
	printf("%s\n", arr);
	return 0;
}