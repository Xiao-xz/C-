int main()
{
	char* ret;
	char arr1[] = "198.168.1.1";
	char arr2[] = ".";
	/*strtok(arr1, arr2);*/
	for (ret = strtok(arr1, arr2); ret != NULL; ret = strtok(NULL, arr2))
	{
		printf("%s ", ret);
	}
	return 0;
}