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


//通讯录类型创建
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
	SORT
};

enum Contact2
{
	NAME = 1,
	AGE,
	DELE,
	ADDR
};

//函数声明
//数据初始化函数
void Initcontact(struct Contact* pos);
//添加信息
void addcontact(struct Contact* pos);
//打印信息
void showcontact(const struct Contact* pos);
//删除信息
void DelContact(struct Contact* pos);
//信息排序
void SortContact(struct Contact* pos);
//查找
void SearchContact(const struct Contact* pos);
//修改
void ModifyContact(struct Contact* pos); 
//内存释放
void ExitContact(struct Contact* pos);
