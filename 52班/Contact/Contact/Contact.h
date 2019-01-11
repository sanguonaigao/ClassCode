#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 25
#define TELE_MAX 12

#define MAX 1000

typedef struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
}PeoInfo;

//静态的版本
//typedef struct Contact
//{
//	PeoInfo data[MAX];//存放数据（人的信息）
//	int sz;//当前有效信息的个数
//}Contact, *pContact;

//动态的版本
typedef struct Contact
{
	PeoInfo* data;//指向动态开辟的存储空间
	int sz;//当前有效消息的个数
	int capacity;//容量
}Contact;

void InitContact(Contact* pc);
void DestroyContact(Contact* pc);
void AddContact(Contact* pc);
void ShowContact(Contact* pc);
void DelContact(Contact* pc);
int CheckCapacity(Contact* pc);
void SaveContact(Contact* pc);
void LoadContact(Contact* pc);

#endif //__CONTACT_H__