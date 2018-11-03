#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>


#include "stdio.h"
#define MAXSIZE 1000
//typedef struct student
//{
//	int num[10];
//	char nam[20];
//	int  score;
//}school;
typedef struct made
{  
	int date[MAXSIZE];
	int last;
}SequenList;//初始化 

void Init_SequenList(SequenList *p)
{
	p->last=0;
}
void MAXadd(SequenList *p)
{  
	int i,weizhi=0,max=p->date[0];
	for(i=1;i<p->last;i++)
	{  
		if (max<p->date[i] )
		{
			max=p->date[i];
			weizhi=i;	
		}
	}	
	printf("max=%d,位置是第%d位",max,weizhi+1);
}


void charu(SequenList *p)
{  
	int i,x;
	int j;
	printf("请输入i:\n");
	scanf("%d",&i);
	printf("请输入x:\n");
	scanf("%d",&x);
	for(j=p->last;j>i;j--)
	{
		p->date[j]=p->date[j-1];
	}
	p->date[i]=x;
	p->last++;
	printf("插入后：\n");
	for(j=0;j<p->last;j++)
		printf("%d",p->date[j]);
}

void desor(SequenList *p)
{  
	int i,pd=1,j,m,key;
	for(i=0;i<p->last;i++)
	if(p->date[i]<p->date[i+1])
	{
		printf("顺序表不是降序！\n");
		pd=0;
		break;
	}
	if(pd==1)
	{
		printf("请输入key的值：\n");
		scanf("%d",&key);
		for(j=0;j<p->last;j++)
		{
			if(p->date[j]<=key) break;
		}   
		for(m=p->last;m>p->date[j];m--) 
		{   
			p->date[m]=p->date[m-1];
		} 
		p->date[j]=key;
		p->last++;
	}
}

void statistics(SequenList *p)
{ 
	int i = 0,l=0,x = 0;
	printf("请输入x的值：\n");
	scanf("%d",x);
	for (i=0;i<p->last;i++)
	{
		if(p->date[i]==x)
	l++;
	}
	printf("x出现的次数为%d次!\n",l);
}

void delspe(SequenList *p)
{ 
	int i = 0,x = 0,j = 0;
	printf("请输入X的值：\n");
	scanf("%d",x);
	for(i=0;i<p->last;i++)
	{
		if(p->date[i]==x)
		{
			for(j=p->last;j>=p->date[i];j--)
			{
				p->date[j-1]=p->date[j];     
			}
			p->last--;
		}
	}
}

void del(SequenList *p)
{
	int i = 0,j = 0;
	printf("请输入位置：\n");
	scanf("%d",i);
	for(j=p->date[i];j<=p->last;j--)
		p->date[j-1]=p->date[j];

	p->last--;

	for(i=0;i<p->last;i--)
	{
		printf("%d",p->date[i]);
	}
}

int main()
{
	SequenList sl;
	int l = 0;
	Init_SequenList(&sl);
	printf("请输入数据（-520结束）");
	while(1)
	{
		scanf("%d",&sl.date[sl.last]) ;
		sl.last++;
		if(sl.date[sl.last-1]==-520)
		break;
	}
	sl.last--;
	printf("****************请选择你需要的功能*******************\n");
	printf("***********1.输出顺序表中最大的数据和位置************\n");
	printf("***********2.在顺序表中的第i个位置插入x  ************\n");
	printf("***********3.若顺序表中降序，则插入key使原序不变************\n");
	printf("***********4.统计顺序表中值为x的结点个数************\n");
	printf("***********5.删除顺序表中所有与指定值x相同的结点************\n");
	printf("***********6.从顺序表中删除第i个位置上的元素************\n");
	scanf("%d",&l) ;
	if(l==1) MAXadd(&sl);
	if(l==2)charu(&sl);
	if(l==3)desor(&sl);
	if(l==4)statistics(&sl);
	if(l==5)delspe(&sl);
	if(l==6)del(&sl);
	return 0;
}





//(-1)^s * 2 * 2^-127


//
//int main()
//{
//
//	float f = -5.5;
//	//0.1
//	//1.0*2^-1
//
//	//-5.5
//	//1 10000001 011 00000000000000000000
//	//C0B00000
//	//-1^1 * 1.011*2^2
//	//
//
//	//-101.1
//	//(-1)^1 * 1.011 * 2^2
//	//(-1)^S * M*2^E
//	//
//	//
//	return 0;
//}
//
//int main()
//{
//	int n = 9;
//	//0 00000000 00000000000000000001001
//	//(-1)^0 * 2*-126 * 0.00000000000000000001001;
//
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n",n);//9
//	printf("*pFloat的值为：%f\n",*pFloat);//9.0
//
//	*pFloat = 9.0;
//	//1001.0
//	//1.001*2^3
//	//01000001000100000000000000000000
//	//
//	printf("num的值为：%d\n",n);//9
//	printf("*pFloat的值为：%f\n",*pFloat);//9.0
//	return 0;
//}
//
//
//int main()
//{
//
//	//float f = 3.5;
//	//000000000000000000000000000011.1
//	//
//	//
//	return 0;
//}


//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for(i = 0;i<=255;i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}


//
//int main()
//{
//	char a = 127;
//	char b = a+1;
//	//0000000000000000000000010000000
//	//1111111111111111111111110000000
//	//1111111111111111111111101111111
//	//1000000000000000000000010000000
//	//-128
//	printf("%d\n", b);
//	return 0;
//}
////
//int main()
//{
//	char a[1000];
//	int i;
//	for(i=0; i<1000; i++)
//	{
//		a[i] = -1-i;
//	}
//	//-1 -2 .. -128 127 126 ... 4 3 2 1 0 -1 -2 -3 ...-128 127 ..
//	//
//	printf("%d",strlen(a));
//	return 0;
//}


//
//int main()
//{
//	unsigned int i;
//	for(i = 9; i >= 0; i--)
//	{
//		Sleep(100);
//		printf("%u\n",i);
//	}
//	//
//	//9 8 7 6 5 4 3 2 1 0
//	//
//	return 0;
//}

// 
// int main()
// {
// 	int i= -20;
// 	//10000000000000000000000000010100
// 	//11111111111111111111111111101011
// 	//11111111111111111111111111101100
// 	//00000000000000000000000000001010
// 	//11111111111111111111111111110110
// 	//11111111111111111111111111110101
// 	//10000000000000000000000000001010
// 	//-10
// 	unsigned int j = 10;
// 	//00000000000000000000000000001010
// 	//
// 
// 	printf("%d\n", i+j);
// 
// 	return 0;
// }
// 
// int main()
// {
// 	char a = 128;
// 	//10000000
// 	unsigned char b = 128;
// 	//10000000
// 
// 	printf("%u\n", a);//
// 	printf("%u\n", b);//128
// 
// 
// 	//00000000000000000000000010000000
// 	//11111111111111111111111110000000
// 	//11111111111111111111111101111111
// 	//10000000000000000000000010000000
// 	//-128
// 
// 	//printf("%d\n",a);
// 	return 0;
// }
// 

//
//int  main()
//{
//	char a = -1;
//	//11111111-补码
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//
//	signed char b = -1;
//	//11111111-补码
//	unsigned char c = -1;
//	//11111111-补码
//	//00000000000000000000000011111111
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	//-1 -1 1
//	return 0;
//}

//
//signed char ch;
//00000000
//....
//01111111
//10000000
//10000001
//10000010
//
//11111110
//11111111

// struct Stu
// {
// 	char c;
// 	int i;
// };

//联合--共用体
//
//int check_sys()
//{
//	union Un
//	{
//		char c;//1
//		int i;//4
//	}un;
//	un.i = 1;
//	return un.c;
//}
//
//int main()
//{
//	union Un un = {0};
//	//printf("%d\n", sizeof(un));//
//	printf("%p\n", &(un.c));//
//	printf("%p\n", &(un.i));//
//
//	return 0;
//}

// 
// int check_sys()
// {
// 	int a = 1;
// 	//
// 	return *(char*)&a;
// // 	if(*(char*)&a == 1)
// // 		return 1;//小端
// // 	else
// // 		return 0;//大端
// }
// 
// int main()
// {
// 	//int a = 0x11223344;
// 	int ret = check_sys();
// 	if(ret == 1)
// 	{
// 		printf("小端\n");
// 	}
// 	else
// 	{
// 		printf("大端\n");
// 	}
// 	//int a = 20;
// 
// 	//1-1
// 	//1+(-1)
// 	//
// 	//00000000000000000000000000000001
// 	//11111111111111111111111111111111
// 	//00000000000000000000000000000000
// 	//
// 	
// 	//10000000000000000000000000000001
// 	//11111111111111111111111111111110
// 	//11111111111111111111111111111111
// 	//
// 
// 	//10000000000000000000000000001010-原码
// 	//11111111111111111111111111110101-反码
// 	//11111111111111111111111111110110-补码
// 	//FFFFFFF6
// 	//
// 	return 0;
// }
// //
//int main()
//{
//	int *p1;
//	void *p2 = p1;
//
//	//void* p2;
//	return 0;
//}
//
//void test()
//{
//	printf("hehe\n");
//}
//
//void test2(void)
//{
//	printf("test2\n");
//}
//
//int main()
//{
//	test2(2);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int arr[5] = {0};
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(arr));//20
//	printf("%d\n", sizeof(int [5]));//40
//
//
//	return 0;
//}
//
//int main()
//{
//	//unsigned short a;//2-16
//	unsigned char c;
//	//
//	//00000000-0
//	//....
//	//01111111-127
//	//10000000-128
//	//....
//	//11111111-255
//	//
//	//[1][][][][][][][]
//	signed char c1;//有符号的
//	unsigned char c2;//无符号的
//
//	return 0;
//}