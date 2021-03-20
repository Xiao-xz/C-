int main(){
	char arr1[] = "abcdef!!!!!!!!!!!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);//Sleep - 停留 - 计算规则‘毫秒’ - 一秒等于1000毫秒;
		system("cls");//system - 执行系统命令;cls - 清空屏幕指令; 
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}