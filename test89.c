typedef struct Stu
{
	char name[20];
	int age;
	char sex[5];
}Stu;
typedef struct Su
{
	struct Stu* s;
	int sz;
}Su;
int main()
{
	Stu tmp = { 0 };
	int i = 0;
	Su s;
	s.sz = 0;
	s.s = (Stu*)malloc(10 * sizeof(Stu));
	FILE* pf = NULL;
	pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		perror("ERROR:");
		return 0;
	}
	while (fread(&tmp, sizeof(Stu), 1, pf))
	{
		s.s[s.sz] = tmp;
		s.sz++;
	}
	for (i = 0; i < s.sz; i++)
	{
		printf("%s  %d  %s\n", s.s[i].name, s.s[i].age, s.s[i].sex);
	}
	fclose(pf);
	pf = NULL;
	pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		perror("ERROR:");
		return 0;
	}
	/*for (i = 0; i < 10; i++)
	{
		scanf("%s", s.s[i].name);
		s.s[i].age = 18;
		scanf("%s", s.s[i].sex);
	}*/
	for (i = 0; i < 10; i++)
	{
		fwrite(&(s.s[i]), sizeof(Stu), 1,pf);
	}
	free(s.s);
	s.s = NULL;
	return 0;
}