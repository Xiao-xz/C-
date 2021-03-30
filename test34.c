int is_prime(int x){
	int j = 0;
	for (j = 2; j <= sqrt(x); j++){
		if (x % j == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2){
		is_prime(i);
		if (is_prime(i) == 1){
			count++;
			printf("%d   ", i);
		}
	}
	printf("count = %d\n", count);
	return 0;
}