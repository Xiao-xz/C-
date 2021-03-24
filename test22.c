int main(){
	int i = 0;
	int a = 1;
	for (i = 101; i <= 200; i++){
		for (a = 2; a < i; a++){
			if (i%a == 0){
				break;
			}
		}
		if (a == i){
			printf("%d ", i);
		}
	}
	return 0;
}