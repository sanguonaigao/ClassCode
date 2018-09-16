#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Maxsize 10000           //顺序表可能的最大长度
typedef char elemtype;          //定义为char型
typedef struct sequlist
{
	elemtype data[Maxsize];        //定义顺序表为一维数组
	int last;                 //last为表中最后一个元素的下标
}SequenList;
SequenList * Init_SequenList()
{
	SequenList * L;                //定义顺序表指针变量
	L=(SequenList * ) malloc (sizeof(SequenList));
	//申请分配内存空间
	if(L != NULL)
	{
		L->last= -1;   //设置顺序表的长度last为-1，表示为空
	}
	return L;                     //返回顺序表的首地址
}
int SequenList_Length(SequenList *L)
{
	return(L->last+1);              //返回顺序表的长度
}

int Insert_SequenList(SequenList *L,elemtype x, int i)
//L是sequenlist类型的指针变量
//x是待插入结点的数据元素值，i是顺序表中插入的位置
{
	int j;
	if(L->last>=Maxsize-1)      //检查顺序表是否已满
	{
		return 0;
	}
	if(i<1||i>L->last+2)        //插入位置有效性检查
	{
		return -1;
	}
	for(j=L->last;j>=i-1;j--)      //在第i个位置插入新结点x
		L->data[j+1]=L->data[j];  //结点依次往后移动一个位置
	L->data[i-1]=x;               //插入x到第i个位置
	L->last=L->last+1;            //将顺序表长度加1
	return 1;
}
int Search_SequenList(SequenList *L,elemtype key)
{
	int i;
	for(i=0;i<=L->last;i++)
		//表中元素依次与key进行比较
		if(L->data[i] == key)
			return (i+1);
	return 0;
}
int Delete_SequenList(SequenList *L,int i)
//删除第i个位置上的结点
{
	int j;
	if(i<1||i>L->last+1)            //检查指定位置的有效性
	{
		return 0;
	}
	else
	{
		for(j=i;j<=L->last;j++)
			L->data[j-1]=L->data[j];        //结点前移
		L->last--;                      //表长减1
	}
	return 1;
}
elemtype GetData_SequenList(SequenList *L,int i)
{
	if(i<1||i>L->last+1)            //位置有效性检查
	{
		return 0;
	}
	else
		return (L->data[i-1]);         //返回所需结点的值
}
int menu()
{
	int m;
	printf("功能菜单\n");
	printf("===========\n");
	printf("1.输出长度\n");
	printf("2.查找功能\n");
	printf("3.取数据元素\n");
	printf("4.插入功能\n");
	printf("5.删除功能\n");
	printf("0.退出\n");
	printf("===========\n");
	printf("请输入要选择的功能:\n");
	scanf("%d",&m);
	while(m>5||m<0)
	{
		printf("选择有误！\n请重新输入：");
		scanf("%d",&m);
	}
	return m;
}
int main()
{
	SequenList * pSeq = NULL;
	int m = menu();
	int key;
	int pos = 0;
	switch(m)
	{
	case 0:exit(0);break;
	case 1:
		pSeq = Init_SequenList();
		break;
	case 2:
		printf("请输入你要查找的数据:>");
		scanf("%d", &key);
		Search_SequenList(pSeq,key);
		break;
	case 3:
		printf("请输入你要获取元素的下标:>");
		scanf("%d", &key);
		GetData_SequenList(pSeq, key);
		break;
	case 4:
		printf("请输入你要插入的数据和位置:>");
		scanf("%d%d", &key, &pos);
		Insert_SequenList(pSeq, key, pos);
		break;
	case 5:
		printf("请输入你要删除的数据的位置:>");
		scanf("%d", &pos);
		Delete_SequenList(pSeq, pos);
		break;
	default:break;
	}
	return 0;
}
// 
// int main()
// {
// 	printf("%c\n", '\x045');//
// 	//printf("%d\n", strlen("abcdef"));//
// 	//printf("%d\n", strlen("c:\test\32\test.c"));//12 15 14 11 13 
// 
// 
// 	//c:\test\test.c
// 
// 	//printf("c:\\test\\test.c\n");
// 	//printf("(are you ok\?\?)\n");
// 	//printf("%c\n", '\'');
// 	//printf("%s", "\"");
// 	//printf("\a\a\a\a\a\a\a\a\a");
// 
// 
// 	return 0;
// }
//
//int main()
//{
//	//"abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//
//	printf("%s\n", "abcdef");
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}
//
////枚举
//enum Sex
//{
//	//枚举常量
//	MALE=5,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s1 = MALE;
//	enum Sex s2 = FEMALE;
//	enum Sex s3 = SECRET;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}
//
//#define 定义的标识符常量
// #define MAX 1000
// 
// int main()
// {
// 	//MAX = 2000;
// 	int arr[MAX];
// 	printf("%d\n", MAX);//1000	
// 	return 0;
// }
//
//int main()
//{
////	3;
////	3.14;
//	//3 = 5;
//	//const int num = 10;
//	//num = 20;
//	//printf("%d\n", num);//20
//	//const int n = 10;
//	//int arr[n] = {0};
//
//	return 0;
//}

//int main()
//{
//	{
//		int age = 20;
//	}
//	printf("%d\n", age);
//	return 0;
//}

//int age = 10;
//
//void print()
//{
//	printf("2:%d\n", age);
//}
//int main()
//{
//	printf("1:%d\n", age);//
//	print();
//	return 0;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d%d", &num1, &num2);
//	sum = num1+num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
// int age = 20;
// //代码块
// int main()
// {
// 	int age = 10;
// 	{
// 		int age = 30;
// 		printf("age  =%d\n", age);//
// 	}
// 	return 0;
// }


//
//int main()
//{
//	char ch = 'B';
//	short age = 20;
//	float weight = 150.0;//double
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4 
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//
//	return 0;
//}

// int main()
// {
// 	printf("hehe\n");
// 	//system("pause");//暂停
// 	return 0;
// }
// 
// int main()
// {
// 	int num = 20;
// 	scanf("%d", &num);
// 	//scanf_s
// 
// 	printf("num = %d\n", num);
// 
// 	return 0;
// }

//#include <stdio.h>

//主函数--程序的入口

// int main()
// {
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 
// 	return 0;
// }
