int sys()
{
	union
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = sys();
	if (ret == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}