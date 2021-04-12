int Add(int x,int y)
{
	return x + y;
}

int main()
{
	int a = 10;
	int b = 20;
	int (*pa)(int ,int) = Add;
	printf("%d\n", Add(a, b));
	printf("%d\n", pa(a, b));
	return 0;
}