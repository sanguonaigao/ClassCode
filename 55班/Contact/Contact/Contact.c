#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"


void CheckCapacity(Contact* pcon)
{
	if(pcon->sz == pcon->capacity)
	{
		//增容
		PeoInfo* ptr = (PeoInfo*)realloc(pcon->data, (pcon->capacity+2)*sizeof(PeoInfo));
		if(ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity+=2;
			printf("增容成功\n");
		}
	}
}

void LoadContact(Contact* pcon)
{
	FILE* pfRead = fopen("contact.dat", "r");
	int i = 0;
	PeoInfo tmp = {0};
	if(pfRead == NULL)
	{
		printf("加载文件失败\n");
		return;
	}
	//读文件
	while(fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		CheckCapacity(pcon);
		pcon->data[pcon->sz] = tmp;
		pcon->sz++;
	}

	fclose(pfRead);
	pfRead = NULL;
}

void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	pcon->data = (PeoInfo*)malloc(DEFAULT_SZ*sizeof(PeoInfo));
	if(pcon->data == NULL)
	{
		return;
	}
	//memset
	memset(pcon->data, 0, DEFAULT_SZ*sizeof(PeoInfo));
	pcon->capacity = DEFAULT_SZ;
	//加载文件中数据
	LoadContact(pcon);
}

void AddContact(Contact* pcon)
{
	assert(pcon);
	CheckCapacity(pcon);
	
	printf("请输入名字:>");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pcon->data[pcon->sz].age));
	printf("请输入性别:>");
	scanf("%s", (pcon->data[pcon->sz].sex));
	printf("请输入电话:>");
	scanf("%s", (pcon->data[pcon->sz].tele));
	printf("请输入地址:>");
	scanf("%s", (pcon->data[pcon->sz].addr));
	pcon->sz++;
	printf("添加成功\n");

}

void ShowContact(const Contact* pcon)
{
	int i = 0;
	//名字  性别   年龄   电话    地址
	printf("%10s\t%5s\t%5s\t%12s\t%20s\n", "名字","性别","年龄","电话","地址");
	for(i=0; i<pcon->sz; i++)
	{
		printf("%10s\t%5s\t%5d\t%12s\t%20s\n", 
			pcon->data[i].name, 
			pcon->data[i].sex,
			pcon->data[i].age,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}

static int FindEntry(Contact* pc, char name[])
{
	int i = 0;
	for(i=0; i<pc->sz; i++)
	{
		if(strcmp(pc->data[i].name, name)==0)
			return i;
	}
	//没找到
	return -1;
}

void DelContact(Contact* pcon)
{
	char name[NAME_MAX] = {0};
	int ret = 0;
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	ret = FindEntry(pcon, name);
	if(ret == -1)
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

void SaveContact(Contact* pcon)
{
	FILE* pfWrite = fopen("contact.dat", "w");
	int i = 0;
	if(pfWrite == NULL)
	{
		printf("保存文件失败\n");
		return;
	}
	//写文件
	for(i=0; i<pcon->sz; i++)
	{
		fwrite(pcon->data+i, sizeof(PeoInfo), 1, pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
}
void DestoryContact(Contact* pcon)
{
	assert(pcon);
	if(pcon->data != NULL)
	{
		//保存文件
		SaveContact(pcon);
		free(pcon->data);
		pcon->data = NULL;
	}
}
