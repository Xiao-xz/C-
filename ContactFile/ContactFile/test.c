#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

void menu()
{
	printf("********************************\n");
	printf("*** 1.���           2.ɾ��  ***\n");
	printf("*** 3.����           4.�޸�  ***\n");
	printf("*** 5.��ӡ           6.����  ***\n");
	printf("*** 7.���桡�������� 0.�˳�  ***\n");
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
		printf("��ѡ��:>");
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
			printf("�����˳�\n");
			break;
		default:printf("�Ƿ�����\n");
			break;
		}
	} while (input);
	
	return 0;
}