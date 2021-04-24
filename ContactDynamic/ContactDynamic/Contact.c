#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"
//数据初始化
void Initcontact(struct Contact* pos)
{
	assert(pos);
	pos->data = malloc(MAX_CAPACITY * sizeof(Peoinfo));
	if (pos->data == NULL)
	{
		return;
	}
	pos->capacity = MAX_CAPACITY;
	pos->size = 0;
}

int datasearch(const struct Contact* pos, char* name)
{
	int i = 0;
	for (i = 0; i < pos->size; i++)
	{
		if (0 == strcmp(name, pos->data[i].name))
		{
			return i;
		}
	}
	return -1;
}

//数据增容
void Incapacity(Contact* pos)
{
	if (pos->size == pos->capacity)
	{
		Peoinfo* ptr = realloc(pos->data, (pos->capacity + 1) * sizeof(Peoinfo));
		if (ptr != NULL)
		{
			pos->data = ptr;
			pos->capacity++;
			//printf("增容成功\n");
		}
		else
		{
			return;
		}
	}
}
//数据添加
void addcontact(struct Contact* pos)
{
	assert(pos);
	Incapacity(pos);
	printf("请输入名字:>");
	scanf("%s", pos->data[pos->size].name);
	printf("请输入年龄:>");
	scanf("%d", &(pos->data[pos->size].age));
	printf("请输入性别:>");
	scanf("%s", pos->data[pos->size].sex);
	printf("请输入电话:>");
	scanf("%s", pos->data[pos->size].dele);
	printf("请输入住址:>");
	scanf("%s", pos->data[pos->size].addr);
	pos->size++;
	printf("添加成功\n");
}
//数据打印
void showcontact(const struct Contact* pos)
{
	assert(pos);
	int i = 0;
	if (pos->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		for (i = 0; i < pos->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				pos->data[i].name,
				pos->data[i].age,
				pos->data[i].sex,
				pos->data[i].dele,
				pos->data[i].addr);
		}
	}
}
//数据删除
void DelContact(struct Contact* pos)
{
	assert(pos);
	char input[MAX_NAME];
	int i;
	printf("输入你要删除的用户名:>");
	scanf("%s", input);
	i = datasearch(pos, input);
	if (-1 != i)
	{
		int j = 0;
		for (j = i; j < pos->size - 1; j++)
		{
			pos->data[j] = pos->data[j + 1];
		}
		pos->size--;
		printf("删除成功\n");
	}
	else
	{
		printf("没有查找到该用户名\n");
	}
}

//数据排序
int cmp_data_ADDR(const void* e1, const void* e2)
{
	return strcmp((*(struct Peoinfo*)e1).addr, (*(struct Peoinfo*)e2).addr);
}
int cmp_data_DELE(const void* e1, const void* e2)
{
	return strcmp((*(struct Peoinfo*)e1).dele, (*(struct Peoinfo*)e2).dele);
}
int cmp_data_NAME(const void* e1,const void* e2)
{
	return strcmp((*(struct Peoinfo*)e1).name, (*(struct Peoinfo*)e2).name);
}
int cmp_data_AGE(const void* e1,const void* e2)
{
	return ((*(struct Peoinfo*)e1).age) - ((*(struct Peoinfo*)e2).age);
}
void SortContact(struct Contact* pos)
{
	assert(pos);
	int input = 0;
	scanf("%d", &input);
	switch (input)
	{
	case NAME:
		qsort(pos->data, pos->size, sizeof(pos->data[0]), cmp_data_NAME);
		break;
	case AGE:
		qsort(pos->data, pos->size, sizeof(pos->data[0]), cmp_data_AGE);
		break;
	case DELE:
		qsort(pos->data, pos->size, sizeof(pos->data[0]), cmp_data_DELE);
		break;
	case ADDR:
		qsort(pos->data, pos->size, sizeof(pos->data[0]), cmp_data_ADDR);
		break;
	default:printf("选择错误\n");
		break;
	}
}

//数据查找
void SearchContact(const struct Contact* pos)
{
	int i=0;
	char input[MAX_NAME] = { 0 };
	printf("输入你要查找人的姓名\n");
	scanf("%s", input);
	i = datasearch(pos, input);
	if (i != -1)
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			pos->data[i].name,
			pos->data[i].age,
			pos->data[i].sex,
			pos->data[i].dele,
			pos->data[i].addr);
	}
	else
	{
		printf("未找到该用户\n");
	}
}

//数据修改
void ModifyContact(struct Contact* pos)
{
	printf("请输入你要修改的用户名\n");
	int i = 0;
	char input[MAX_NAME] = { 0 };
	printf("输入你要查找人的姓名\n");
	scanf("%s", input);
	i = datasearch(pos, input);
	if (i == -1)
	{
		printf("未找到该用户\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pos->data[i].name);
		printf("请输入年龄:>");
		scanf("%d", &(pos->data[i].age));
		printf("请输入性别:>");
		scanf("%s", pos->data[i].sex);
		printf("请输入电话:>");
		scanf("%s", pos->data[i].dele);
		printf("请输入住址:>");
		scanf("%s", pos->data[i].addr);
		printf("修改成功\n");
	}
}

void ExitContact(struct Contact* pos)
{
	//内存释放
	free(pos->data);
	pos->data = NULL;
}