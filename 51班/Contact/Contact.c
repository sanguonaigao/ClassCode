#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

void InitContact(Contact* pcon)
{
	assert(pcon != NULL);

	pcon->sz = 0;
	memset(pcon->data, 0, sizeof(pcon->data));//ok?
}

void AddContact(Contact* pcon)
{
	assert(pcon != NULL);

	if(pcon->sz == MAX)
	{
		printf("通讯录已满，无法添加\n");
	}
	else
	{
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
}

void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon != NULL);
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	for(i=0; i<pcon->sz; i++)
	{
		printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n", 
			pcon->data[i].name, 
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}

static int FindEntry(Contact* pcon, char name[])
{
	int i= 0;
	assert(pcon != NULL);
	for(i=0; i<pcon->sz; i++)
	{
		if(strcmp(pcon->data[i].name, name)==0)
		{
			return i;//找到了
		}
	}
	return -1;//没找到
}

void DelContact(Contact* pcon)
{
	int pos = 0;
	char name[MAX_NAME] = {0};
	assert(pcon != NULL);
	if(pcon->sz == 0)
	{
		printf("通讯录已空，无法删除\n");
	}
	else
	{
		printf("请输入要删除人的姓名:>");
		scanf("%s", name);
		pos = FindEntry(pcon, name);
		if(pos == -1)
		{
			printf("要删除的人不存在\n");
		}
		else
		{
			//删除
			int i = 0;
			for(i=pos; i<pcon->sz-1; i++)
			{
				pcon->data[i] = pcon->data[i+1];
			}
			pcon->sz--;
			printf("删除成功\n");
		}
	}
}