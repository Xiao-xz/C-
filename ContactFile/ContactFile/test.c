#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

void menu()
{
	printf("********************************\n");
	printf("*** 1.添加           2.删除  ***\n");
	printf("*** 3.查找           4.修改  ***\n");
	printf("*** 5.打印           6.排序  ***\n");
	printf("*** 7.保存　　　　　 0.退出  ***\n");
	printf("********************************\n");
}

int main()
{
	struct Contact con;
	Initcontact(&con);
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			addcontact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			showcontact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case save:
			SaveCantact(&con);
			break;
		case EXIT:
			SaveCantact(&con);
			ExitContact(&con);
			printf("程序退出\n");
			break;
		default:printf("非法输入\n");
			break;
		}
	} while (input);
	
	return 0;
}