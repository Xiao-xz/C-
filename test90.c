int main()
{
	FILE* pf = NULL;
	pf = fopen("text.dat", "wb");
	int a = 1;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", fwrite(&a, sizeof(int), 1, pf));
	}
	fclose(pf);
	pf = NULL;
	return 0;
}