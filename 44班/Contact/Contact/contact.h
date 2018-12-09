//创建一个通讯录
//1000个人的信息
//每个人的信息：姓名，年龄，电话，住址，性别
//
//1. 添加人的信息
//2. 删除人的信息
//3. 修改人的信息
//4. 查找信息
//5. 安排xxx排序
//6. 打印通讯录的信息
//0. 退出

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>


#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000
#define DEFAULT_SZ 2

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
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


//通讯录-静态版本
// typedef struct Contact
// {
// 	struct PeoInfo data[MAX];//1000个人的信息
// 	int sz;//记录当前有多少个人的信息
// }Contact;

//通讯录--动态版本
typedef struct Contact
{
	struct PeoInfo* data;//维护动态开辟的数组
	int sz;//记录当前有多少个人的信息
	int capacity;//当前通讯录的最大容量
}Contact;


void InitContact(Contact* pcon);
void DestroyContact(Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(const Contact* pcon);
void DelContact(Contact* pcon);
void SearchContact(const Contact* pcon);
void ModifyContact(Contact* pcon);
void SortContact(Contact* pcon);


