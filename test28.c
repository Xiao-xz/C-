int main(){
	int i = 0;
	for (i = 1; i <= 9; i++) {
		int j = 0;
		for (j = 1; j <= i;j++){
			printf("%d*%d=%-2d\t", j, i, j*i);
		}
		printf("\n");
	}
	return 0;
}