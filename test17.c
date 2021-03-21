int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b){
		int x;
		x = b;
		b = a;
		a = x;
	}
	if (a < c){
		int x;
		x = c;
		c = a;
		a = x;
	}
	if (b < c){
		int x;
		x = b;
		b = c;
		c = x;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}
