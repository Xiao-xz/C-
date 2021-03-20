int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 11, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;//左下标
	int right = sz - 1;//右下标
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < k){
			left = mid += 1;
		}
		else if (arr[mid]>k){
			right = mid -= 1;
		}
		else if (arr[mid] = k){
			printf("找到了，下标是:arr[%d]\n", mid);
			break;
		}
	}
	if (left >= right)
		{
			printf("没找到\n");
		}
	return 0;
}