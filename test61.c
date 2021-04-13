int cmp_char(const void* e1, const void* e2)
{
	return strcmp((char*)e1,(char*)e2);
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int i = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	char arr1[] = { 'd','c','b','a' };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
  //第一个参数 待排序数组的首元素地址
  //第二个参数 带排序数组的元素个数
  //第三个参数 数组每个元素的宽度 - 大小是字节
  //第四个参数 是函数指针 比较两个元素的所用的地址 - 这个函数使用者自己实现
	//		   函数指针的参数是待比较两个元素的地址
	qsort(arr1, sz, sizeof(arr1[0]),cmp_char);
	for ( i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < sz1; i++)
	{
		printf("%c ", arr1[i]);
	}
	return 0;
 }