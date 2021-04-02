int Fib(int n){
	if (n == 3){//测试计算次数;
		n++;
	}
	if (n <= 2)
		return 1;
	else
		return  Fib(n - 1) + Fib(n - 2);
}
int Fib1(int n){
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main(){
	int n = 0;
	scanf("%d", &n);
	int ret = Fib1(n);
	printf("%d\n", ret);
	return 0;
}