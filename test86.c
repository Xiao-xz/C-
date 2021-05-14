struct Str
{
	char name[20];
	int age;
};
struct S
{
	int sz;
	struct Str S[];
};
int main()
{
	struct S* s;
	s = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(struct Str));
	free(s);
	s = NULL;
	return 0;
}