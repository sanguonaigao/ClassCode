#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// void test()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//}
//int main()
//{
//
//	return 0;
//}

//unsigned long pulArray[] = {6,7,8,9,10};
//unsigned long *pulPtr;
//
//
//pulPtr = pulArray;
//*(pulPtr + 3) += 3;
//printf("%d ,%d\n",*pulPtr, *(pulPtr + 3));
//
//A) 9,12         B) 6,9          C) 6,12          D)6,10
//

// void example()
// {
// 	int i;
// 	char acNew[20];
// 	for(i = 0; i < 5; i++)
// 	{
// 		acNew[i] = '0';
// 	}
// 	printf("%d\n",strlen(acNew));
// 	return ;
// }
//'0'---48
//'\0'--0
//0 ----0
//NULL--0
//#include "test.h"

// int g_val = 2018;
// 
// int main()
// {
// 
// 	return 0;
// }
// 

// struct stu
// {
// 	int num;
// 	char name[10];
// 	int age;
// };
// void fun(struct stu *p)
// {
// 	printf("%s\n",(*p).name);
// 	return;
// }
// void main()
// {
// 	struct stu students[3] = {{9801,"zhang",20},
// 	{9802,"wang",19},
// 	{9803,"zhao",18}};
// 	fun(students + 1);
// 	return ;
// }

// 
// #include<stdio.h>
// void main()
// {
// 	union
// 	{
// 		short k;
// 		char i[2];
// 	}*s, a;
// 	s = &a;
// 	s->i[0] = 0x39;
// 	s->i[1] = 0x38;
// 	printf("%x\n", a.k);
// }
//

// void main()
// {
// 	unsigned char a = 200;
// 	unsigned char b = 100;
// 	unsigned char c = 0;
// 	//00000000000000000000000011001000
// 	//00000000000000000000000001100100
// 
// 	//00000000000000000000000011001000
// 	//00000000000000000000000001100100
// 	//00000000000000000000000100101100
// 	//
// 	//00000000000000000000000000101100
// 	//
// 	c = a + b;
// 	printf("%d %d", a+b,c);
// }
//
//#include<stdio.h>
//int main()
//{
//	char c;
//	unsigned char uc;
//	unsigned short us;
//
//	c = 128;  //10000000
//	uc = 128; //10000000
//	us = c + uc;
//	//11111111111111111111111110000000
//	//00000000000000000000000010000000
//   //100000000000000000000000000000000
//	//0000000000000000
//	printf("0x%x",us);//0x0
//	us = (unsigned char)c + uc;
//	//00000000000000000000000010000000
//	//00000000000000000000000010000000
//	//00000000000000000000000100000000
//	//0100
//	//
//
//	printf("0x%x",us);
//	//
//	us = c + (char)uc;
//	//11111111111111111111111110000000
//	//11111111111111111111111110000000
//   //111111111111111111111111100000000
//	//ff00
//	printf("0x%x",us);
//
//	return 0;
//}


// 
// unsigned short *sum(unsigned char a, unsigned char b)
// {
// 	unsigned short s = 0;
// 	s = a + b;
// 	return &s;
// }
// 
// int main()
// {
// 	unsigned short *p = NULL;
// 	unsigned char a = 1, b = 2;
// 	p = sum(a, b);
// 	//printf("%u+%u",a,b);
// 	printf("= %u\n",*p);
// 	return 0;
// }

//
//unsigned short* pucCharArray[10][10];
//
//typedef union unRec
//{
//	unsigned long ullndex;//4 4 4 
//	unsigned short usLevel[7];//14 2
//	unsigned char ucPos;//1 1
//}REC_S;
////14-2
//
//REC_S stMax, *pstMax;
//
//int main()
//{
//	printf("%d\n", sizeof(pucCharArray));//400
//	printf("%d\n", sizeof(stMax));//16
//	printf("%d\n", sizeof(pstMax));//4
//	printf("%d\n", sizeof(*pstMax));//16
//
//	return 0;
//}
//
//struct BBB
//{
//	long lA1;//0-3
//	char cA2;//1 4 1  //4
//	char cA3;//1 4 1  //5
//	//6-7
//	long lA4;//4 4 4  //8-11
//	long lA5;//4 4 4  //12-15
//}* p;
//
//int main()
//{
//	p = (struct BBB*)0x100000;
//	printf("%p\n", p + 0x1);//0x100010
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	printf("%p\n", (unsigned long*)p + 0x1);//0x100004
//	printf("%p\n", (char *)p + 0x1);//0x100001
//
//	return 0;
//}
//
//
//#define CHAR char
//#define ULONG unsigned long
//#define VOID void
//
//CHAR *VOS_strncpy(CHAR *pcDest, const CHAR *szSrc, ULONG ulLength)
//{
//	CHAR *pcPoint = pcDest;
//	if((NULL == szSrc)||(NULL == pcDest))
//	{
//		return NULL;
//	}
//	while(ulLength && (*pcPoint = *szSrc))
//	{
//		pcPoint++;
//		szSrc++;
//		ulLength--;	
//	}
//	if(!ulLength)
//	{
//		*pcPoint = '\0';
//	}
//	return pcDest;
//}
//VOID main(VOID)
//{
//	CHAR szStrBuf[] = "ABC4567890";
//	CHAR szStrBuf1[] = "ABC\0567890";
//	strncpy(szStrBuf,"ABC",3);
//	VOS_strncpy(szStrBuf1, "ABC", 3);
//	printf("Str1 = %s\nStr2 = %s",szStrBuf,szStrBuf1);
//	//Str1 = ABC4567890
//	//Str2 = ABC
//}
//
//#include<stdio.h>
//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//void main()
//{
//	int j = 4;
//	int m = 1;
//	int k;
//	k = fun(j, m);
//	printf("%d\n",k);
//	k = fun(j, m);
//	printf("%d\n",k);
//	return ;
//}

// #pragma pack(4)
// 
// union tagAAAA
// {
// 	struct
// 	{
// 		char ucFirst;//0
// 		//1
// 		short usSecond;//2 4 2//2-3
// 		char ucThird;//1 4 1 //4
// 	}half;//6
// 	short kk;//2
// }number;
// 
// struct tagBBBB
// {
// 	char ucFirst;//0
// 	//1
// 	short usSecond;//2-3
// 	char ucThird;//4
// 	//5
// 	short usForth;//2 4 2 //6-7
// }half;
// 
// struct tagCCCC
// {
// 	struct
// 	{
// 		char ucFirst;//0
// 		//1
// 		short usSecond;//2-3
// 		char ucThird;//4
// 		//5
// 	}half;//6
// 	//6 7
// 	long kk;//8-11
// };
// #pragma pack()
// 
// int main()
// {
// 	printf("%d\n", sizeof(union tagAAAA));//6
// 	printf("%d\n", sizeof(struct tagBBBB));//8
// 	printf("%d\n", sizeof(struct tagCCCC));//12
// 
// 	return 0;
// }
//
//
//Áõ»ÔÑÞ --- 
//
//Å£¿ÍÍøapp
//

#pragma pack(4)
int main()
{
	unsigned char puc[4];
	struct tagPIM
	{
		unsigned char ucPim1;
		unsigned char ucData0 : 1;
		unsigned char ucData1 : 2;
		unsigned char ucData2 : 3;
	}*pstPimData;
	pstPimData = (struct tagPIM*)puc;
	memset(puc,0,4);
	pstPimData->ucPim1 = 2; 
	pstPimData->ucData0 = 3;
	pstPimData->ucData1 = 4;
	pstPimData->ucData2 = 5;

	printf("%02x %02x %02x %02x\n",puc[0], puc[1], puc[2], puc[3]);
	return 0;
}
#pragma pack() /*»Ö¸´È±Ê¡¶ÔÆë·½Ê½*/







