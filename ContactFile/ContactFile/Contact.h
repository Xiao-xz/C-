#pragma once

#define MAX_CAPACITY 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_DELE 12
#define MAX_ADDR 20


#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>


//ͨѶ¼���ʹ���
typedef struct Peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char dele[MAX_DELE];
	char addr[MAX_ADDR];
}Peoinfo;

typedef struct Contact
{
	struct Peoinfo* data;
	int capacity;
	int size;
}Contact;

enum Contact1
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	save
};

enum Contact2
{
	NAME = 1,
	AGE,
	DELE,
	ADDR
};

//��������
//���ݳ�ʼ������
void Initcontact(Contact* pos);
//�����Ϣ
void addcontact(Contact* pos);
//��ӡ��Ϣ
void showcontact(const Contact* pos);
//ɾ����Ϣ
void DelContact(Contact* pos);
//��Ϣ����
void SortContact(Contact* pos);
//����
void SearchContact(const Contact* pos);
//�޸�
void ModifyContact(Contact* pos); 
//�ڴ��ͷ�
void ExitContact(Contact* pos);
//���ݴ���
void SaveCantact(const Contact* pos);
//��������
void Incapacity(Contact* pos);