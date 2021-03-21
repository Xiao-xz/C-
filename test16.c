struct XXX
{
	char password[20];
	char zhanghao[20];
};
int main(){
	struct XXX S1 = { "123456", "张三" };
	char mima[20] = { 0 };
	char hao[20] = { 0 };
	int i = 0;
	for (i = 1; i <= 3; i++){
		printf("请输入账号:>");
		scanf("%s", hao);
		printf("请输入密码:>");
		scanf("%s", mima);
		if (strcmp(hao, S1.zhanghao) == 0 && strcmp(mima, S1.password) == 0){
			printf("登入成功\n");
			break;
		}
		else if(i<3){
			printf("账号或密码错误，请重新输入\n");
		}
	}
	if (i == 4){
		printf("账号或密码错误三次,退出程序\n");
	}
	return 0;
}
