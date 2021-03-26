int main(){
	int arr[] = { -1, -2, -5, -4, -9, -11, -6, -7, -8};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0];
	for (i = 0; i < sz; i++){
		
		if (max <= arr[i]){
			max = arr[i];
		}
	}
	printf("MAX = %d\n", max);
	return 0;
}