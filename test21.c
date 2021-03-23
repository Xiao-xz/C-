int main(){
	int i;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if ( (i % 400 == 0) || ((i % 4 == 0) && (i % 100 != 0)) ){
			printf("%d  ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}
