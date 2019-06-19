#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(pContact pcon)
{
	pcon->sz = 0;
	memset(pcon->data, 0, MAX*sizeof(PeoInfo));
}

void AddContact(struct Contact* pcon)
{
	if(pcon->sz < MAX)
	{
		//录信息
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
		printf("添加成功\n");
	}
	else
	{
		printf("通讯录已满，无法添加\n");
	}
}

void ShowContact(struct Contact* pcon)
{
	int i = 0;
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "姓名","年龄","性别","电话","地址");
	for(i=0; i<pcon->sz; i++)
	{
		printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[i].name, 
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}

static int FindPeoByName(pContact pcon, char name[NAME_MAX])
{
	int i = 0;
	for(i=0; i<pcon->sz; i++)
	{
		if(strcmp(pcon->data[i].name, name) == 0)
		{
			return i;
		}
	}
	//找不到
	return -1;
}

void DelContact(pContact pcon)
{
	int ret = 0;
	char name[NAME_MAX] = {0};
	if(pcon->sz == 0)
	{
		printf("通讯录已空，不能删除\n");
		return;
	}
	printf("请输入要删除人姓名:>");
	scanf("%s", name);
	//按照名字来查找
	ret = FindPeoByName(pcon, name);
	if(-1 == ret)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除
		int i = 0;
		for(i=ret; i<pcon->sz-1; i++)
		{
			pcon->data[i] = pcon->data[i+1];
		}
		pcon->sz--;
		printf("删除成功\n");
	}
}

void SeachContact(pContact pcon)
{
	char name[NAME_MAX] = {0};
	int pos = 0;
	printf("请输入要查找人的姓名:>");
	scanf("%s", name);
	pos = FindPeoByName(pcon, name);
	if(-1 == pos)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "姓名","年龄","性别","电话","地址");
		printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data[pos].name, 
				pcon->data[pos].age,
				pcon->data[pos].sex,
				pcon->data[pos].tele,
				pcon->data[pos].addr);
	}
}

void ModifyContact(pContact pcon)
{
	char name[NAME_MAX] = {0};
	int pos = 0;
	printf("请输入要修改人的姓名:>");
	scanf("%s", name);
	pos = FindPeoByName(pcon, name);
	if(-1 == pos)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		//录信息
		printf("请输入名字:>");
		scanf("%s", pcon->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pcon->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", pcon->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pcon->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", pcon->data[pos].addr);
		printf("修改成功\n");
	}
}

//void qsort( void *base, 
//	size_t num, 
//	size_t width, 
//	int ( *compare )(const void *elem1, const void *elem2 ) );



int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

int cmp_by_age(const void* e1, const void* e2)
{
	return ((PeoInfo*)e1)->age - ((PeoInfo*)e2)->age;
}


void SortContact(pContact pcon)
{
	qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_age);
	printf("排序成功\n");
}
