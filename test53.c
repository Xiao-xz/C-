void main()
{
	int c[6] = { 10,20,30,40,50,60 }, *p, *s;
	p = c;
	s = &c[5];
	printf("%d\n", s - p);
}