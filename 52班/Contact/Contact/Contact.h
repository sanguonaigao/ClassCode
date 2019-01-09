#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <string.h>
#include <stdio.h>
#include <assert.h>

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

typedef struct Contact
{
	PeoInfo data[MAX];//存放数据（人的信息）
	int sz;//当前有效信息的个数
}Contact, *pContact;

void InitContact(Contact* pc);
void AddContact(Contact* pc);
void ShowContact(Contact* pc);
void DelContact(Contact* pc);

#endif //__CONTACT_H__