int main()
{
	//malloc函数 开辟动态内存空间 参数传递字节 不对内存进行初始化
	//calloc函数 开辟动态内存空间 参数传递(元素格式，元素大小(单位是字节)) 对内存进行初始化为0
	//realloc函数 对开辟的动态内存进行追加 参数传递(地址，大小(单位是字节)) 不对内存进行初始化
	//使用动态内存开辟函数务必对指针进行检查,以免造成程序假死
	//使用动态内存开辟函数使用完务必释放内存,以免造成内存泄漏
	int* p1 = calloc(10, sizeof(int));
	if (p1 == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	int* p2 = malloc(40);
	if (p2 == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p2 + i) = i;
	}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", *(p2 + i));
	//}
	int* prt = realloc(p2, 15 * sizeof(int));
	if (prt != NULL)
	{
		p2 = prt;
		for (i = 10; i < 15; i++)
		{
			*(p2 + i) = i;
		}
		for (i = 0; i < 15; i++)
		{
			printf("%d ", *(p2 + i));
		}
	}
	//free函数 释放动态内存,地址不变 释放完不会将p2置为空指针
	//free函数 不能对一个地址进行两次或多次释放,否则造成程序假死
	//free函数 对空指针不进行任何操作
	//free函数 只能释放堆区地址
	free(p2);
	p2 = NULL;
	return 0;
}