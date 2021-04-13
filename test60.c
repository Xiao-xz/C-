struct Stu
{
	char name[20];
	int age;
};
int cmp_S_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
int cmp_S_age(const void* e1,const void* e2)
{
	return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
}
int cmp_char(const void* e1, const void* e2)
{
	return strcmp((char*)e1, (char*)e2);
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void Swap(char*baf1, char*baf2, int width)
{
	int i = 0;
	for ( i = 0; i < width; i++)
	{
		char tmp = *baf1;
		*baf1 = *baf2;
		*baf2 = tmp;
		baf1++;
		baf2++;
	}
}
void bubble_sort(void* base,int sz,int width,int(*cmp)(void* e1,void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}
//void test1()
//{
//	int i = 0;
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	char arr1[] = { 'd','c','b','a' };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	bubble_sort(arr1, sz, sizeof(arr1[0]),cmp_char);
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%c ", arr1[i]);
//	}
//}
//void test2()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",10},{"wangwu",30} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_S_age);
//}
void test3()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",10},{"wangwu",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_S_name);
}
int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}