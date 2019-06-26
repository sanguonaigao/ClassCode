#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//#define SQUARE(X) (X)*(X)
//
//int main()
//{
//	printf("%d\n", SQUARE(2+3));
//	system("pause");
//	return 0;
//}

#define PRINT(X) printf("the value of "#X" is %d\n", X);

int main()
{
	int a = 10;
	int b = 20;
	PRINT(a);
	PRINT(b);
	system("pause");
	return 0;
}

//
//#define DOUBLE(X) ((X)+(X))
//
//#define MAX 100
//
//int main()
//{
//	printf("MAX=%d\n", MAX);
//	printf("%d\n", 10*DOUBLE(MAX));
//	system("pause");
//	return 0;
//}
//
//#define MAX 1000;
//
//int main()
//{
//	//int a = MAX;
//	Add(2, MAX);//ERR
//	return 0;
//}
//
//#define CASE break;case
//
//int main()
//{
//	int day = 0;
//	switch(day)
//	{
//	case 1:
//	CASE 2:
//	CASE 3:
//	CASE 4:
//		break;
//	}
//	return 0;
//}
//预处理指令
//
//#define MAX 1000
//#define reg register
//
//#define forever for(;;){}
//
//int main()
//{
//	//reg int num = 10;
//	forever
//
//	return 0;
//}
//
//void test()
//{
//	int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	if(pf == NULL)
//		return;
//	for(i=0; i<10; i++)
//	{
//		fprintf(pf, "file:%s line=%d fun=%s i=%d\n", __FILE__, __LINE__, __FUNCTION__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//}
//
//#define DEUBG_PRINT printf("hehe:%d file:%s date:%s time:%s\n", \
//						__LINE__, \
//						__FILE__, \
//						__DATE__, __TIME__)
//
//int main()
//{
//	DEUBG_PRINT;	
//	//test();
//	system("pause");
//	return 0;
//}

//

//日志文件

//
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	printf("hehe\n");
//	system("pause");
//	return 0;
//}
//

//IDE--集成开发环境

//cd   change directory
//cd /home
//pwd  print work directory
//ls   list  
//vim
//三种模式
//普通模式--i-->插入模式---ESC--->普通模式
//普通模式--:-->命令行模式---> w q wq 



