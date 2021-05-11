void* my_memmove(void* dest,const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src || dest == src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
int main()
{
	int i = 0;
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1+2, arr1, sizeof(arr1[0])*5);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}