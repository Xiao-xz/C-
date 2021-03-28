//RAND_MAX - 32767
void game(){
	int ret;
	int guess = 0;
	ret = rand() % 100 + 1;//rand - 生成随机数;
	while (1){
		printf("请猜数字>:");
		scanf("%d", &guess);
		if (guess > ret){
			printf("猜大了\n");
		}
		else if (guess < ret){
			printf("猜小了\n");
		}
		else {
			printf("恭喜你,猜对了\n");
			break;
		}
	}
}
void menu(){
	printf("###### 猜数字游戏 ######\n");
	printf("########################\n");
	printf("#### 1,play  0.exit ####\n");
	printf("########################\n");
}
int main(){
	int input = 0;
	srand((unsigned int)time(NULL));//srand - 设置随机数生成器;
	//时间戳,当前时间-计算机起始时间(1970_1_1,0:0:0)=(xxxx)秒;
	//使用时间戳来设置随机数生成器;time_t time(time_t* time);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			system("cls");
			printf("退出游戏\n");
			break;
		default:
			printf("输出错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}