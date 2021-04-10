int Add(int a,int b)
{
	return a + b;
}

int jian(int a, int b)
{
	return a - b;
}

int cheng(int a, int b)
{
	return a * b;
}

int chu(int a, int b)
{
	return a / b;
}

void jiemian()
{
	printf("********************************\n");
	printf("***  1.加法           2.减法 ***\n");
	printf("***  3.乘法          4.除法 ****\n");
	printf("************ 0 .exit ***********\n");
	printf("********************************\n");
}

void test()
{
	int input = 0;
	int a = 0;
	int b = 0;
	do
	{
		jiemian();
		printf("请选择\n");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("程序退出\n");
			break;
		}
		printf("输入两个操作数\n");
		scanf("%d%d", &a, &b);
		switch (input)
		{
		case 1:
			printf("%d + %d = %d\n", a, b, Add(a, b));
			break;
		case 2:
			printf("%d - %d = %d\n", a, b, jian(a, b));
			break;
		case 3:
			printf("%d * %d = %d\n", a, b, cheng(a, b));
			break;
		case 4:
			printf("%d / %d = %d\n", a, b, chu(a, b));
			break;
		default:printf("选择错误\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}