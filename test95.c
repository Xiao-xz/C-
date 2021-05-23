bool isPalindrome(int x)
{
	if (x < 0)
	{
		return false;
	}
	int left = 0;
	int right = 0;
	int numsSzie = 0;
	int n = x;
	while (n)
	{
		n /= 10;
		numsSzie++;
	}
	int* arr = malloc(sizeof(int) * numsSzie);
	n = x;
	right = numsSzie - 1;
	while (n)
	{
		arr[numsSzie - 1] = n % 10;
		n /= 10;
		numsSzie--;
	}
	while (left <= right)
	{
		if (arr[right] == arr[left])
		{
			right--;
			left++;
		}
		else
		{
			return false;
		}
	}
	if (left >= right)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
	free(arr);
}
int main()
{
	int x = 0;
	scanf("%d", &x);
	printf("%d",isPalindrome(x));
	return 0;
}