int main()
{
	char ch[1024] = { 0 };
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fgets(ch, 1024, pf);
	printf("%s", ch);
	fgets(ch, 1024, pf);
	printf("%s", ch);
	fclose(pf);
	pf = NULL;
	return 0;
}