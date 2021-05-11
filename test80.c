void* my_memcpy(void* dest,const void* str,size_t count)
{
	assert(dest && str);
	char* ret = (char*)dest;
	while (count--)
	{
		*(char*)dest = *(char*)str
		++(char*)dest;
		++(char*)str;
	}
	return ret;
}
int main()
{
	char arr1[] = "xxxxxxxxx";
	char arr2[] = "abc";
	my_memcpy(arr1, arr2, sizeof(arr2));
	printf("%s\n", arr1);
	return 0;
}