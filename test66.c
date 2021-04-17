     //    1
     //   1 1
     //  1 2 1
     // 1 3 3 1
     //1 4 6 4 1
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	//赋值
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0 )
			{
				arr[i][j] = 1;
			}
			if (j==i)
			{
				arr[i][j] = 1;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = (arr[i-1][j] + arr[i-1][j-1]);
			}
		}
	}
	//打印
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			//printf("  ");
			printf(" %d ", arr[i][j]);
		}
		//int a = 0;
		//for (a = 0; a < 2 * i + 1; a++)
		//{
		//	
		//}
		printf("\n");
	}
	return 0;
}