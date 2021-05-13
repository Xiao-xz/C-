union Un
{
	char c;
	int i;
};
int main()
{
	union Un u;
	printf("%d ", sizeof(u));
	return 0;
}