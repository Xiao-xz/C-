void Bubble_sort(int arr[],int sz){
	int i = 0;
	int flag = 1;
	
	for (i = 0; i < sz-1; i++){
		int j = 0;
		for (j = 0; j<sz - 1 - i; j++){
			if (arr[j]>arr[j + 1]){
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
	}
	if (flag == 1){
		printf("无需排列\n");
	}
}
int main(){
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr,sz);
	int i = 0;
	for (; i <= sz - 1; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}