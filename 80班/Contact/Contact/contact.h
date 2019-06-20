//
//人的信息：名字+年龄+性别+电话+住址
//最多放1000个人的信息
//
//增加联系人
//删除
//修改
//查找
//显示
//排序
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 30
#define TELE_MAX 12

#define MAX 1000

#define DEFAULT_SZ 3

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

typedef struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

//typedef struct Contact
//{
//	int sz;//有效信息的个数
//	struct PeoInfo data[MAX];//存放人的信息
//}Contact, *pContact;

typedef struct Contact
{
	int sz;//有效信息的个数
	int capacity;//当前通讯录的总容量
	struct PeoInfo data[0];//存放人的信息
}Contact, *pContact;

//pContact=== Contact* == struct Contact*

void InitContact(pContact pcon);
pContact AddContact(struct Contact* pcon);
void ShowContact(struct Contact* pcon);
void DelContact(pContact pcon);
void SeachContact(pContact pcon);
void ModifyContact(pContact pcon);
void SortContact(pContact pcon);
void DestroyContact(pContact pcon);

//静态的通讯录
//1000

//动态的版本
//

//文件

//
//数据库-MySQL
//SQL-SERVER--weiruan
//Oracle
//




