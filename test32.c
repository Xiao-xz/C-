int main(){
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑将在一分钟后关机,输入'我是猪'，取消关机\n");
	scanf("%s", &input);
	if (strcmp(input, "我是猪")==0){
		system("shutdown -a");
	}
	else{
		goto again;
	}
	return 0;
}