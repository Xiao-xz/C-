int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int num = 0;
	scanf("%d", &num);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while (left<=right){
		mid = (left + right) / 2;
		if (arr[mid] < num){
			left = mid + 1;
		}
		else if (arr[mid]>num){
			right = mid - 1;
		}
		else if(arr[mid] == num){
			printf("找到了，下标是arr[%d]\n", mid);
			break;
		}
	}
	if (left >= right){
		printf("没找到");
	}
	return 0;
}