#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

void* check_capacity(pContact pc)
{
	assert(pc);
	if(pc->sz == pc->capacity)
	{
		PeoInfo *tmp = realloc(pc->data, (pc->capacity+2)*sizeof(PeoInfo));
		if(tmp != NULL)
		{
			pc->data = tmp;
			pc->capacity+=2;
			printf("增容成功\n");
			return pc->data;
		}
		else
		{
			return NULL;
		}
	}
	return pc->data;
}

void LoadContact(pContact pc)
{
	PeoInfo tmp = {0};
	FILE* pf = fopen("contact.dat", "rb");
	if(pf == NULL)
	{
		perror("open file for read");
		exit(EXIT_FAILURE);
	}
	//读取--加载内存

	while(fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		if(check_capacity(pc) != NULL)
		{
			pc->data[pc->sz] = tmp;
			pc->sz++;
		}
	}
	
	fclose(pf);
	pf = NULL;
}

void InitContact(pContact pc)
{
	assert(pc);
	pc->sz = 0;
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ*sizeof(PeoInfo));
	pc->capacity = DEFAULT_SZ;
	//加载文件信息
	LoadContact(pc);
}

void DestroyContact(pContact pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}

void AddContact(pContact pc)
{
	assert(pc);

	if(check_capacity(pc)==NULL)
	{
		return;
	}
	
	//添加
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);//sz=0
	printf("年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);
	//...
	pc->sz++;
}

void ShowContact(pContact pc)
{
	int i = 0;
	assert(pc);
	printf("%10s\t%4s\t%5s\t%12s\t%20s\n", "name", "age", "sex", "tele", "addr");
	for(i=0; i<pc->sz; i++)
	{
		printf("%10s\t%4d\t%5s\t%12s\t%20s\n", 
			pc->data[i].name, 
			pc->data[i].age, 
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int FindEntry(pContact pc, char name[])
{
	int i = 0;
	assert(pc);
	for(i=0; i<pc->sz; i++)
	{
		if(strcmp(name, pc->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;//没找到
}

void DelContact(pContact pc)
{
	int i = 0;
	int j = 0;
	int pos = 0;
	char name[NAME_MAX] = {0};
	assert(pc);
	if(pc->sz == 0)
	{
		printf("通讯录已空，无法删除\n");
		return;
	}
	printf("请输入要删除人的名字>:");
	scanf("%s", name);
	//1. 查找
	pos = FindEntry(pc, name);
	//2. 删除
	if(pos != -1)
	{
		for(j=pos; j<pc->sz-1; j++)
		{
			pc->data[j] = pc->data[j+1];
		}
		pc->sz--;
		printf("删除成功\n");
	}
	else
	{
		printf("要删除的人不存在\n");
	}
	
}

void SearchContact(pContact pc)
{
	char name[NAME_MAX] = {0};
	int pos = 0;
	printf("请输入要查找人的名字>:");
	scanf("%s", name);
	pos = FindEntry(pc, name);
	if(pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%10s\t%4s\t%5s\t%12s\t%20s\n", "name", "age", "sex", "tele", "addr");
		printf("%10s\t%4d\t%5s\t%12s\t%20s\n", 
			pc->data[pos].name, 
			pc->data[pos].age, 
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}

void ModifyContact(pContact pc)
{
	char name[NAME_MAX] = {0};
	int pos = 0;
	printf("请输入要修改人的名字>:");
	scanf("%s", name);
	pos = FindEntry(pc, name);
	if(pos == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[pos].name);//sz=0
		printf("年龄:>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pos].addr);
	}
}

void SortContact(pContact pc)
{
	int i = 0;
	int j = 0;
	assert(pc);
	for(i=0; i<pc->sz-1; i++)
	{
		int flag = 0;
		for(j=0; j<pc->sz-1-i; j++)
		{
			if(pc->data[j].age > pc->data[j+1].age)
			{
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j+1];
				pc->data[j+1] = tmp;
				flag = 1;
			}
		}
		if(flag == 0)
			break;
	}
}

void EmptyContact(pContact pc)
{
	pc->sz = 0;
	printf("通讯录清空\n");
}

void SaveContact(pContact pc)
{
	FILE* pf = fopen("contact.dat", "wb");
	int i = 0;
	if(pf == NULL)
	{
		perror("open file for write");
		exit(EXIT_FAILURE);
	}
	//写文件
	for(i=0; i<pc->sz; i++)
	{
		fwrite(pc->data+i, sizeof(PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}