#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"
//���ݳ�ʼ��
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

//��������
void Incapacity(Contact* pos)
{
	if (pos->size == pos->capacity)
	{
		Peoinfo* ptr = realloc(pos->data, (pos->capacity + 1) * sizeof(Peoinfo));
		if (ptr != NULL)
		{
			pos->data = ptr;
			pos->capacity++;
			//printf("���ݳɹ�\n");
		}
		else
		{
			return;
		}
	}
}
//�������
void addcontact(struct Contact* pos)
{
	assert(pos);
	Incapacity(pos);
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
	assert(pos);
	char input[MAX_NAME];
	int i;
	printf("������Ҫɾ�����û���:>");
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
		printf("ɾ���ɹ�\n");
	}
	else
	{
		printf("û�в��ҵ����û���\n");
	}
}

//��������
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
	default:printf("ѡ�����\n");
		break;
	}
}

//���ݲ���
void SearchContact(const struct Contact* pos)
{
	int i=0;
	char input[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵�����\n");
	scanf("%s", input);
	i = datasearch(pos, input);
	if (i != -1)
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			pos->data[i].name,
			pos->data[i].age,
			pos->data[i].sex,
			pos->data[i].dele,
			pos->data[i].addr);
	}
	else
	{
		printf("δ�ҵ����û�\n");
	}
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
	if (i == -1)
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

void ExitContact(struct Contact* pos)
{
	//�ڴ��ͷ�
	free(pos->data);
	pos->data = NULL;
}