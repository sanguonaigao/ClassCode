#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	//memset(pcon->data, 0, sizeof(pcon->data));
	pcon->data = (PeoInfo *)calloc(DEFAULT_SZ, sizeof(PeoInfo));
	if(pcon->data == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	pcon->capacity = DEFAULT_SZ;
}

void DestroyContact(Contact* pcon)
{
	free(pcon->data);
	pcon->data = NULL;
	pcon->capacity = 0;
	pcon->sz = 0;
}

//
//void AddContact(Contact* pcon)
//{
//	assert(pcon);
//
//	if(pcon->sz == MAX)
//	{
//		printf("通讯录已满，无法添加\n");
//		return;
//	}
//	//录入信息
//	printf("请输入名字:>");
//	scanf("%s", pcon->data[pcon->sz].name);
//	printf("请输入年龄:>");
//	scanf("%d", &(pcon->data[pcon->sz].age));
//	printf("请输入性别:>");
//	scanf("%s", pcon->data[pcon->sz].sex);
//	printf("请输入电话:>");
//	scanf("%s", pcon->data[pcon->sz].tele);
//	printf("请输入地址:>");
//	scanf("%s", pcon->data[pcon->sz].addr);
//
//	pcon->sz++;
//	printf("增加成功\n");
//}
void CheckCapacity(Contact* pcon)
{
	if(pcon->sz == pcon->capacity)
	{
		//增容
		PeoInfo* ptr = realloc(pcon->data, (pcon->capacity+2)*sizeof(PeoInfo));
		if(ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity += 2;
			printf("增容成功\n");
		}
	}
}

void AddContact(Contact* pcon)
{
	assert(pcon);

	CheckCapacity(pcon);
	
	//录入信息
	printf("请输入名字:>");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pcon->data[pcon->sz].age));
	printf("请输入性别:>");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pcon->data[pcon->sz].addr);

	pcon->sz++;
	printf("增加成功\n");
}

void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "地址");
	for(i=0; i<pcon->sz; i++)
	{
		printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[i].name, 
			pcon->data[i].age, 
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}


static int FindByName(Contact* pcon, char name[])
{
	int i = 0;
	assert(pcon);
	for(i=0; i<pcon->sz; i++)
	{
		if(0 == strcmp(pcon->data[i].name, name))
		{
			return i;
		}
	}
	//找不到
	return -1;
}

void DelContact(Contact* pcon)
{
	int i = 0;
	char name[NAME_MAX] = {0};
	int pos = 0;
	assert(pcon);
	
	if(pcon->sz == 0)
	{
		printf("通讯录已空，无法删除\n");
		return;
	}
	//删除
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//查找
	pos = FindByName(pcon, name);
	if(pos == -1)
	{
		printf("要删除的不存在\n");
		return;
	}
	//移除
	for(i=pos; i<pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i+1];
	}
	pcon->sz--;
	printf("删除成功\n");
}








