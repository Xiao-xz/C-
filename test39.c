int my_strlen(char* str){
	if (*str != '\0')
		return 1 + my_strlen(str+1);
	else
		return 0;
}
int main(){
	char arr[] = "bit";
	int ret = my_strlen(arr);
	//printf("%d\n", strlen(sit));
	printf("%d\n", ret);
	return 0;
}