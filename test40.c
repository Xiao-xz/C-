int Fac1(int n){
	if (n <= 1)
		return 1;
	else
		return n * Fac1(n - 1);
}
int main(){
	int n = 0;
	scanf("%d", &n);
	int ret = Fac1(n);
	printf("%d\n", ret);
	return 0;
}