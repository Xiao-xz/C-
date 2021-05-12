typedef struct Stu
{
	char name;
	char username;
	char password;
	int tele;
}Stu;
int main()
{
	Stu S1 = { 0 };
	printf("%d\n", sizeof(S1));
	return 0;
}