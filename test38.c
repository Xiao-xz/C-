void print(int a){
	if (a > 9){
		print(a / 10);
	}
	printf("%d ", a % 10);
}
int main(){
	int input = 0;
	scanf("%d", &input);
	print(input);
	return 0;
}