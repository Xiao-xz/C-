//枚举
enum color
{
	RED,
	GREEN,
	BLUE
};
int main()
{
	enum color s = RED;
	printf("%d\n", sizeof(s));
	return 0;
}