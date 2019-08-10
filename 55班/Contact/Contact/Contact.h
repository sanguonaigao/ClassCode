#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

//名字 性别 年龄 电话 住址
#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 30
#define TELE_MAX 12

#define DEFAULT_SZ 3
#define MAX 1000

//人的信息
typedef struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

//通讯录的结构体
//静态版本
//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	int sz;//有效信息的个数
//}Contact;

//动态增长版本
typedef struct Contact
{
	PeoInfo *data;
	int sz;//有效信息的个数
	int capacity;//当前最大的容量
}Contact;

void InitContact(Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(const Contact* pcon);
void DelContact(Contact* pcon);
void DestoryContact(Contact* pcon);
void SaveContact(Contact* pcon);
void LoadContact(Contact* pcon);
