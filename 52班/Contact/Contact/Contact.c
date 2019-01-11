#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	//memset(pc->data, 0, sizeof(pc->data));
	pc->data = (PeoInfo*)malloc(3*sizeof(PeoInfo));
	if(pc->data == NULL)
	{
		perror("InitContact::malloc()");
		exit(EXIT_FAILURE);
	}
	pc->capacity = 3;
	//加载文件中的保存信息
	LoadContact(pc);
}

void DestroyContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	pc->capacity = 0;
	free(pc->data);
	pc->data = NULL;
}

int CheckCapacity(Contact* pc)
{
	assert(pc);
	if(pc->capacity == pc->sz)
	{
		//扩容
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity+2)*sizeof(PeoInfo));
		if(ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += 2;
			printf("增容成功\n");
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void AddContact(Contact* pc)
{
	assert(pc);

	/*if(pc->sz == MAX)
	{
	printf("很遗憾，通讯录已满，无法添加\n");
	return;
	}*/
	if(CheckCapacity(pc) == 0)
	{
		printf("增容失败，无法添加\n");
		return;
	}
	//添加
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", &(pc->data[pc->sz].sex));
	printf("请输入地址:>");
	scanf("%s", &(pc->data[pc->sz].addr));
	printf("请输入电话:>");
	scanf("%s", &(pc->data[pc->sz].tele));
	pc->sz++;

	printf("添加成功\n");
}

void ShowContact(Contact* pc)
{
	int i = 0;
	assert(pc);
	//姓名    年龄    电话   性别    地址
	//zhangsan 20     123    男      西安
	printf("%10s\t%5s\t%5s\t%15s\t%12s\n", "姓名", "年龄", "性别", "地址", "电话");
	for(i=0; i<pc->sz; i++)
	{
		printf("%10s\t%5d\t%5s\t%15s\t%12s\n", 
					pc->data[i].name,
					pc->data[i].age,
					pc->data[i].sex,
					pc->data[i].addr,
					pc->data[i].tele);
	}
}


int FindByName(Contact* pc)
{
	char name[NAME_MAX] = {0};
	int i = 0;
	printf("请输入姓名:>");
	scanf("%s", name);
	for(i=0; i<pc->sz; i++)
	{
		if(strcmp(pc->data[i].name, name)==0)
		{
			return i;
		}
	}
	return -1;
}

void DelContact(Contact* pc)
{
	int pos = 0;
	int i = 0;
	if(pc->sz == 0)
	{
		printf("很遗憾，没得删\n");
		return;
	}
	//找
	pos = FindByName(pc);
	if(pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//删
	for(i=pos; i<pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i+1];
	}
	pc->sz--;
	printf("删除成功\n");
}

void SaveContact(Contact* pc)
{
	FILE* pf = fopen("contact.dat", "wb");
	int i = 0;
	if(pf == NULL)
	{
		perror("SaveContact::fopen");
		return;
	}
	//写数据
	for(i=0; i<pc->sz; i++)
	{
		fwrite(&(pc->data[i]), sizeof(PeoInfo), 1, pf);
	}

	fclose(pf);
	pf = NULL;
}

void LoadContact(Contact* pc)
{
	FILE* pf = fopen("contact.dat", "rb");
	PeoInfo tmp = {0};
	if(pf == NULL)
	{
		perror("LoadContact::fopen");
		return;
	}
	//读文件
	while(fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		//将读取到的元素放在通讯录中
		CheckCapacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
	fclose(pf);
	pf = NULL;
}

