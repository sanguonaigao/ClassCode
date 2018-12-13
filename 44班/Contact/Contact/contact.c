#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(Contact* pcon)
{
	assert(pcon != NULL);
	//保证通讯录有一定的空间
	pcon->sz = 0;
	pcon->capacity = DEFAULT_SZ;
	pcon->data = (PeoInfo*)malloc(DEFAULT_SZ*sizeof(PeoInfo));
	if(pcon->data == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	memset(pcon->data, 0, DEFAULT_SZ*sizeof(PeoInfo));
	//加载文件的信息到通讯录
	LoadContact(pcon);
}

void DestroyContact(Contact* pcon)
{
	assert(pcon != NULL);
	free(pcon->data);
	pcon->data = NULL;
	pcon->sz = 0;
	pcon->capacity = 0;
}

int CheckCapacity(Contact* pcon)
{
	assert(pcon != NULL);
	if(pcon->sz == pcon->capacity)
	{
		PeoInfo* tmp = (PeoInfo*)realloc(pcon->data, (pcon->capacity+2)*sizeof(PeoInfo)); 
		if(tmp != NULL)
		{
			pcon->data = tmp;
			pcon->capacity += 2;
			printf("增容成功\n");
			return 1;
		}
		else
		{
			printf("%s\n", strerror(errno));
			return 0;
		}
	}
	else
	{
		return 1;
	}
}

void AddContact(Contact* pcon)
{
	assert(pcon != NULL);

	if(1 == CheckCapacity(pcon))
	{
		printf("请输入名字:>");
		scanf("%s", pcon->data[pcon->sz].name);
		printf("请输入年龄:>");
		scanf("%d", &(pcon->data[pcon->sz].age));
		printf("请输入性别:>");
		scanf("%s", pcon->data[pcon->sz].sex);
		printf("请输入地址:>");
		scanf("%s", pcon->data[pcon->sz].addr);
		printf("请输入电话:>");
		scanf("%s", pcon->data[pcon->sz].tele);
		pcon->sz++;
	}
}

void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon != NULL);

	//名字   年龄    性别     电话     地址
	//张三   20      男       123      西安
	printf("%10s\t%4s\t%4s\t%12s\t%15s\n", "名字", "年龄", "性别", "电话", "地址");
	for(i=0; i<pcon->sz; i++)
	{
		printf("%10s\t%4d\t%4s\t%12s\t%15s\n", 
			pcon->data[i].name,
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);//打印一个人的信息
	}
}

static int FindEntry(const Contact* pcon, char name[])
{
	int i = 0;
	assert(pcon != NULL);

	for(i=0; i<pcon->sz; i++)
	{
		if(strcmp(pcon->data[i].name, name) == 0)
		{
			return i;//找到
		}
	}
	return -1;//找不到
}

void DelContact(Contact* pcon)
{
	//查找
	int j = 0;
	int pos = 0;
	char name[MAX_NAME] = {0};
	assert(pcon != NULL);

	if(pcon->sz == 0)
	{
		printf("通讯录已空，无法删除\n");
		return;
	}
	printf("请输入你要删除人的名字:>");
	scanf("%s", name);
	//查找
	pos = FindEntry(pcon, name);
	if(pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//删除
	for(j=pos; j<pcon->sz-1; j++)
	{
		pcon->data[j] = pcon->data[j+1];
	}
	pcon->sz--;
	printf("删除成功\n");
}

void SearchContact(const Contact* pcon)
{
	char name[MAX_NAME] = {0};
	int pos = 0;
	assert(pcon != NULL);

	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	pos = FindEntry(pcon, name);
	if(pos == -1)
	{
		printf("要查找人的信息不存在\n");
	}
	else
	{
		printf("%10s\t%4s\t%4s\t%12s\t%15s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%10s\t%4d\t%4s\t%12s\t%15s\n", 
				pcon->data[pos].name,
				pcon->data[pos].age,
				pcon->data[pos].sex,
				pcon->data[pos].tele,
				pcon->data[pos].addr);//打印一个人的信息
	}
}

void ModifyContact(Contact* pcon)
{
	char name[MAX_NAME] = {0};
	int pos = 0;
	assert(pcon != NULL);

	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	pos = FindEntry(pcon, name);
	if(pos == -1)
	{
		printf("要修改人的信息不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pcon->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pcon->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", pcon->data[pos].sex);
		printf("请输入地址:>");
		scanf("%s", pcon->data[pos].addr);
		printf("请输入电话:>");
		scanf("%s", pcon->data[pos].tele);
	}
}

void SortContact(Contact* pcon)
{
	int i = 0;
	assert(pcon);
	//趟数
	for(i=0; i<pcon->sz-1; i++)
	{
		int flag = 1;
		int j = 0;
		for(j=0; j<pcon->sz-1-i; j++)
		{
			if(strcmp(pcon->data[j].name, pcon->data[j+1].name) > 0)
			{
				PeoInfo tmp = pcon->data[j];
				pcon->data[j] = pcon->data[j+1];
				pcon->data[j+1] = tmp;
				flag = 0;
			}
		}
		if(flag == 1)
			break;
	}
}

void SaveContact(Contact* pcon)
{
	FILE* pfOut = fopen("contact.dat", "wb");
	int i = 0;
	if(pfOut == NULL)
	{
		perror("open file for write");
		system("pause");
		return;
	}
	//保存数据
	for(i=0; i<pcon->sz; i++)
	{
		fwrite(pcon->data+i, sizeof(PeoInfo), 1, pfOut);
	}

	//关闭文件
	fclose(pfOut);
	pfOut = NULL;
	printf("保存成功\n");
}

void LoadContact(Contact* pcon)
{
	FILE* pfIn = fopen("contact.dat", "rb");
	int i = 0;
	PeoInfo tmp = {0};
	if(pfIn == NULL)
	{
		perror("open file for read");
		system("pause");
		return;
	}
	//加载数据
	while(fread(&tmp, sizeof(PeoInfo), 1, pfIn))
	{
		CheckCapacity(pcon);
		pcon->data[pcon->sz] = tmp;
		pcon->sz++;
	}
	//关闭文件
	fclose(pfIn);
	pfIn = NULL;
}



