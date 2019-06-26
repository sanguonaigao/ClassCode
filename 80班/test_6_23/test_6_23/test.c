#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//FILE
// 
// int main()
// {
// 	int ch = 0;
// 	while((ch=getchar()) != EOF)
// 	{
// 		putchar(ch);
// 	}
// 	return 0;
// }
//
//int main()
//{
//	FILE* pf = fopen("80.txt", "w");
//	char *p = "hello  bit";
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	while(*p)
//	{
//		fputc(*p, pf);
//		p++;
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("80.txt", "r");
//	int ch = 0;
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读取文件
//
//	while((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c\n", ch);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("80.txt", "r");
//	char arr[20] = {0};
//	int ch = 0;
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读取文件
//	fgets(arr, 20, pf);
//
//	printf("%s\n", arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	system("pause");
//
//	return 0;
//}
//
//struct S
//{
//	int a;
//	char name[20];
//};
//
//int main()
//{
//	struct S s = {100, "zhangsan"};
//	//打开文件
//	FILE* pf = fopen("80.txt", "w");
//	if(pf == NULL)
//	{
//		//异常处理
//		return 0;
//	}
//	//写文件
//	//printf("%d %s", )
//	fprintf(pf, "%d %s", s.a, s.name);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//struct S
//{
//	int a;
//	char name[20];
//};


//任何一个C语言的程序
//默认会打开3个流
//stdin--标准输入流
//stdout--标准输出流
//stderr--标准错误流
//FILE*

//fscanf
//fprintf
//格式化的读和写文件
//
//int main()
//{
//	struct S s = {0};
//	//打开文件
//	FILE* pf = fopen("80.txt", "r");
//	if(pf == NULL)
//	{
//		//异常处理
//		return 0;
//	}
//	//读文件
//	//scanf("%d %s", )
//	//fscanf(pf, "%d %s", &(s.a), s.name);
//	fscanf(stdin, "%d %s", &(s.a), s.name);
//	//fprintf(pf, "%d %s\n", s.a, s.name);
//	fprintf(stdout, "%d %s\n", s.a, s.name);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

//scanf--从标准输入流读取格式化的数据
//printf--向标准输出写入格式化的数据

//fscanf--从所有输入流读取格式化的数据
//fprintf--从所有输出流写入格式化的数据

//sscanf-从内存中读取格式化的数据
//sprintf-写格式的数据到内存中


//
//struct S
//{
//	int a;
//	char name[20];
//	float sc;
//};
//
////序列化和反序列化
//int main()
//{
//	char buf[100] = {0};
//	struct S tmp = {0};
//
//	struct S s = {100, "zhangsan", 95.7f};
//	//sprintf
//	sprintf(buf, "%d %s %f\n", s.a, s.name, s.sc);
//	printf("%s", buf);//
//	sscanf(buf, "%d %s %f", &(tmp.a), tmp.name, &(tmp.sc));
//
//	printf("%d %s %f\n", tmp.a, tmp.name, tmp.sc);
//
//	system("pause");
//	return 0;
//}
//

//
//深信服
//CVTE
//
//
//struct S
//{
//	char name[20];
//	int age;
//	float sc;
//};
//
////读数据
//
//int main()
//{
//	struct S s  = {0};
//	FILE* pf = fopen("80.txt", "rb");
//	if(pf == NULL)
//		return 0;
//	//读文件
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%d %s %f\n", s.age, s.name, s.sc);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//  //写数据
//	struct S s  = {"zhangsan", 20, 55.5};
//	FILE* pf = fopen("80.txt", "wb");
//	if(pf == NULL)
//		return 0;
//	//写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//


int main()
{
	FILE* pf = fopen("80.txt", "r");
	int ch = 0;
	if(pf == NULL)
	{
		return 0;
	}
	//读文件
	ch = fgetc(pf);

	//定位文件指针的位置
	fseek(pf, 4, SEEK_SET);
	ch = fgetc(pf);//
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));//
	fclose(pf);
	pf = NULL;

	system("pause");
	return 0;
}