#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"
//数据初始化
void Initcontact(struct Contact* pos)
{
	assert(pos);
	//printf("%d\n", sizeof(pos->data));
	memset(pos, 0, sizeof(pos->data));
	pos->size = 0;
}

//数据查找
int datasearch(const struct Contact* pos, char* name)
{
	assert(pos && name);
	int i = 0;
	for (i = 0; i < pos->size; i++)
	{
		if (0 == strcmp(name, (pos->data[i]).name))
		{
			return i;
		}
	}
	return 1001;
}
void SearchContact(const struct Contact* pos)
{
	char name[20];
	int ptr = 0;
	printf("输入要查找的用户名\n");
	scanf("%s", name);
	ptr = datasearch(pos, name);
	if (ptr <= pos->size)
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			pos->data[ptr].name,
			pos->data[ptr].age,
			pos->data[ptr].sex,
			pos->data[ptr].dele,
			pos->data[ptr].addr);
	}
	else
	{
		printf("未找到该用户\n");
	}
}

//数据添加
void addcontact(struct Contact* pos)
{
	assert(pos);
	if (pos->size == MAX)
	{
		printf("通讯录已满,无法添加\n");
	}
	else
	{
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
	char input[MAX_NAME];
	int i;
	printf("输入你要删除的用户名:>");
	scanf("%s", input);
	i = datasearch(pos, input);
	if (i < pos->size)
	{
		while (i < pos->size - 1)
		{
			pos->data[i] = pos->data[i + 1];
			i++;
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
int cmp_data_age(const void* e1,const void* e2)
{
	return ((*(struct Peoinfo*)e1).age) - ((*(struct Peoinfo*)e2).age);
}
void SortContact(struct Contact* pos)
{
	qsort(pos->data,pos->size,sizeof(pos->data[0]),cmp_data_age);
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
	if (i >= pos->size)
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
