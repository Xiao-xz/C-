int main(){
	long n = 1;
	long i=0;
	scanf("%d", &i);
	long ret = 1;
	for (n = 1; n <= i; n++){
		ret = ret*n;
	}
	printf("%d\n", ret);
	return 0;
}