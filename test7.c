int main(){
	
	for (int i = 1; i <= 10; i++){
		if (i == 5){
			continue;
		}
		printf("%d\n", i);
	}
	return 0;
}
int main(){
	int i = 1;
	while (i <= 10){
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}