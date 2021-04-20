#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"
//���ݳ�ʼ��
void Initcontact(struct Contact* pos)
{
	assert(pos);
	//printf("%d\n", sizeof(pos->data));
	memset(pos, 0, sizeof(pos->data));
	pos->size = 0;
}

//���ݲ���
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
	printf("����Ҫ���ҵ��û���\n");
	scanf("%s", name);
	ptr = datasearch(pos, name);
	if (ptr <= pos->size)
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			pos->data[ptr].name,
			pos->data[ptr].age,
			pos->data[ptr].sex,
			pos->data[ptr].dele,
			pos->data[ptr].addr);
	}
	else
	{
		printf("δ�ҵ����û�\n");
	}
}

//�������
void addcontact(struct Contact* pos)
{
	assert(pos);
	if (pos->size == MAX)
	{
		printf("ͨѶ¼����,�޷����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pos->data[pos->size].name);
		printf("����������:>");
		scanf("%d", &(pos->data[pos->size].age));
		printf("�������Ա�:>");
		scanf("%s", pos->data[pos->size].sex);
		printf("������绰:>");
		scanf("%s", pos->data[pos->size].dele);
		printf("������סַ:>");
		scanf("%s", pos->data[pos->size].addr);
		pos->size++;
		printf("��ӳɹ�\n");
	}
}
//���ݴ�ӡ
void showcontact(const struct Contact* pos)
{
	assert(pos);
	int i = 0;
	if (pos->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
//����ɾ��
void DelContact(struct Contact* pos)
{
	char input[MAX_NAME];
	int i;
	printf("������Ҫɾ�����û���:>");
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
		printf("ɾ���ɹ�\n");
	}
	else
	{
		printf("û�в��ҵ����û���\n");
	}
}

//��������
int cmp_data_age(const void* e1,const void* e2)
{
	return ((*(struct Peoinfo*)e1).age) - ((*(struct Peoinfo*)e2).age);
}
void SortContact(struct Contact* pos)
{
	qsort(pos->data,pos->size,sizeof(pos->data[0]),cmp_data_age);
}

//�����޸�
void ModifyContact(struct Contact* pos)
{
	printf("��������Ҫ�޸ĵ��û���\n");
	int i = 0;
	char input[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵�����\n");
	scanf("%s", input);
	i = datasearch(pos, input);
	if (i >= pos->size)
	{
		printf("δ�ҵ����û�\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pos->data[i].name);
		printf("����������:>");
		scanf("%d", &(pos->data[i].age));
		printf("�������Ա�:>");
		scanf("%s", pos->data[i].sex);
		printf("������绰:>");
		scanf("%s", pos->data[i].dele);
		printf("������סַ:>");
		scanf("%s", pos->data[i].addr);
		printf("�޸ĳɹ�\n");
	}
}
