int main(){
	int a = 10;//4个字节;
	int* p = &a;//取地址;
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 20;//解引用操作符;
	printf("%d\n", a);
	return 0;
}