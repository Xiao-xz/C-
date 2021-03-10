#define MAX(X,Y) (X>Y?X:Y)
int main(){
	int a = 10;
	int b = 20;
	int max = MAX(a, b);
	printf("%d\n", max);
	return 0;
}