int main(){
	int i = 0;
	double odd = 0.0;
	double even = 0.0;
	double sum = 0.0;
	for (i = 1; i <= 100; i++){
		if (i%3==0){
			odd += 1.0 / i;
		}
		if (i % 2 == 0){
			even += 1.0 / i;
		}
	}
	sum = odd + even;
	printf("%lf\n", sum);
	return 0;
}