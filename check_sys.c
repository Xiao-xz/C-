int casl()
{
	int a = 1;
	char* p =(char*) &a;
	return *p;
}

int main()
{
	int ret = casl();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}