struct son
{
	char name[5];
	int age;
};
int main()
{
	struct son s = { "李四",20 };
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		perror("file:");
		return 0;
	}
	fprintf(pf, "%s %d", s.name, s.age);
	fclose(pf);
	pf = NULL;
	return 0;
}