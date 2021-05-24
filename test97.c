char* replaceSpace(char* s) 
{
	int str = strlen(s) - 1;
	if (str <= 0)
	{
		return s;
	}
	int j = 0;
	int i = 0;
	char* tmp = calloc(str*3,sizeof(char));
	for (i = 0; i <= str; i++)
	{
		tmp[j] = s[i];
		if (s[i] == ' ')
		{
			tmp[j] = '%';
			j++;
			tmp[j] = '2';
			j++;
			tmp[j] = '0';
		}
		j++;
	}
	//strcpy(s, tmp);
	return tmp;
}
int main()
{
	char* pc = NULL;
	char ch[10000] = { 0 };
	gets (ch);
	//"     "
	pc = replaceSpace(ch);
	printf("%s\n", pc);
	//printf("%d\n", ' ');
	return 0;
}