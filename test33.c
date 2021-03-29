int main(){
	int i = 1;
	double sum = 0.0;
	while (1)
	{
		sum += 1.0 / i;
		if (sum >= 15){
			break;
		}
		i++;
	}
	printf("%lf", sum);
	return 0;
}