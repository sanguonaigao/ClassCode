#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//Linux-系统
//Centos 7
//ubuntu
//redhat
//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//printf("%p\n", &a);
//	//printf("%p\n", &b);
//
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=11; i++)
//	{
//		arr[i] = 0;
//		printf("hello\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//
//	return 0;
//}
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机!\n");
//	scanf("%s", input);
//	//判断
//	if(strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//

#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include<stdio.h>
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc,0,4);
//	pstPimData->ucPim1 = 2; 
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n",puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = 0x11223344;
	char *pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);
	return 0;
}