//#define - 定义标识符常量;
//#define MAX 100
//#define - 可以定义宏-带参数;
int main(){
	//static - 修饰全局变量 - 静态;
	//延长生命周期;
	//extern - 申明外部符号或申明外部函数;
	extern int a;
	printf("%d\n", a);
	return 0;
}