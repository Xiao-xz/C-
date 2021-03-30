int is_leap_year(int a){
	if ((a % 400 == 0) || ((a % 100 != 0) && (a % 4 == 0))){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int year = 0;
	for (year = 1000; year <= 2000;year++){
		is_leap_year(year);
		if (1 == is_leap_year(year)){
			printf("%d ", year);
		}
	}
	return 0;
}