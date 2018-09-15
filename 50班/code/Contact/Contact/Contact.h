#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


#define DEFAULT_SZ 3

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define MAX 1000

typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

////静态的版本
//typedef struct Contact
//{
//	PeoInfo data[MAX];//存放数据
//	int sz;//当前已有信息的个数
//}Contact, *pContact;


//动态版本
typedef struct Contact
{
	PeoInfo* data;
	int sz;//当前已有信息的个数
	int capacity;//当前最大的容量
}Contact, *pContact;

void InitContact(pContact pc);
void DestroyContact(pContact pc);
void AddContact(pContact pc);
void ShowContact(pContact pc);
void DelContact(pContact pc);
void SearchContact(pContact pc);
void ModifyContact(pContact pc);
void SortContact(pContact pc);
void EmptyContact(pContact pc);
void SaveContact(pContact pc);
void LoadContact(pContact pc);

#endif //__CONTACT_H__

//
//数据库---mysql---C语言接口
//
//SQL
//
