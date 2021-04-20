#pragma once

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_DELE 12
#define MAX_ADDR 20


#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


//通讯录类型创建
struct Peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char dele[MAX_DELE];
	char addr[MAX_ADDR];
};

struct Contact
{
	struct Peoinfo data[MAX];
	int size;
};

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
