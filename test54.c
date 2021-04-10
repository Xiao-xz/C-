char* my_strcpy(char* arr1,const char* arr2)
{
		//while (*arr2 != '\0')
		//{
		//	*arr1 = *arr2;
		//	arr1++;
		//	arr2++;
		//}
	*arr1 = *arr2;
	if (*arr2 != '\0')
		my_strcpy(arr1+1, arr2+1);
	return arr1;
}

int main()
{
	char arr1[10] = "abc";
	char arr2[10] = "defg";
	my_strcpy(arr1, arr2);
	//char*(*p2)(char*, const char*) = my_strcpy;
	//char*(*pf[4])(char*, const char*) = my_strcpy;
	/*(*p2)(arr1, arr2);*/
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//printf("%s\n", *pf);
	return 0;
}