//打印菱形
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
int main()
{
	int i = 0;
	int line = 0;
	scanf("%d", &line);
	for (i = 0; i < line; i++)
	{
		int j = 0;
		//先打印空格
		for (j = 0; j < line-1-i; j++)
		{
			printf(" ");
		}
		//打印*号
		int a = 0;
		for (a = 0; a < 2 * i + 1; a++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		int a = 0;
		for (a = 0; a < 2 * (line - 1 - i) - 1; a++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}