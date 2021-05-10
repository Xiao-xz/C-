char* my_strstr(char* p1,char* p2)
{
	assert(p1 && p2);
	char* cp = p1;
	char* s1,* s2;
	while (*cp)
	{
		s1 = cp;
		s2 = p2;
		while ((*s1) && (*s2) && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (!(*s2))
		{
			return cp;
		}
		cp++;
	}
	return NULL;
}
int main()
{
	char* p1 = "abcdefghijk";
	char* p2 = "def";
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}