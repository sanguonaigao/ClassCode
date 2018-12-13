#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("zhangsan");//ok
//		system("pause");
//		return 0;
//	}
//	//写文件
//	fputc('w', pf);
//	fputc('e', pf);
//
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	//stdin
//	//stdout
//	//stderr
//
//
//	//int ch = fgetc(stdin);//从标准输入(键盘)中读取
//	//fputc(ch, stdout);//把数据写到标准输出（屏幕）
//
//	//printf("%c\n", ch);
//	//putchar();
//	//FILE* pf = fopen("test.txt", "r");
//	//if(pf == NULL)
//	//{
//	//	//printf("%s\n", strerror(errno));
//	//	perror("zhangsan");//ok
//	//	system("pause");
//	//	return 0;
//	//}
//	////读文件
//	//printf("%c\n", fgetc(pf));
//	//printf("%c\n", fgetc(pf));
//
//
//	//fclose(pf);
//	//pf = NULL;
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("zhangsan");//ok
//		system("pause");
//		return 0;
//	}
//	//写一行
//	fputs("hello bit\n", pf);
//	fputs("hello world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	char buf[20] = {0};
//	if(pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("zhangsan");//ok
//		system("pause");
//		return 0;
//	}
//	//读一行
//	fgets(buf, 20, stdin);
//	fputs(buf, stdout);
//	//printf("%s", buf);//hello bit
//	//fgets(buf, 20, pf);
//	//printf("%s", buf);//hello world
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}
//
//scanf/printf
//格式化的输入输出语句
//fscanf/fprintf
//针对所有流的格式化输入输出语句
//sscanf/sprintf
//在字符串中还原一个格式化的数据/把格式化的数据转换为字符串
//


//struct S
//{
//	char name[20];
//	int age;
//};

//int printf(                const char *format [, argument]... );
//int fprintf( FILE *stream, const char *format [, argument ]...);
//int sprintf( char *buffer, const char *format [, argument] ... );


//
//int main()
//{
//	struct S s = {"zhangsan", 20};
//
//	FILE*pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		perror("open file for write");
//		system("pause");
//		return 0;
//	}
//	//写文件
//	//printf("%s %d\n", s.name, s.age);
//	fprintf(pf, "%s %d\n", s.name, s.age);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}


//int scanf(                const char *format [,argument]... );
//int fscanf( FILE *stream, const char *format [, argument ]... );

// 
// int main()
// {
// 	struct S s = {0};
// 
// 	FILE*pf = fopen("test.txt", "r");
// 	if(pf == NULL)
// 	{
// 		perror("open file for read");
// 		system("pause");
// 		return 0;
// 	}
// 	//读文件
// 	//scanf("%s %d", s.name, &(s.age));
// 	fscanf(stdin, "%s %d", s.name, &(s.age));
// 	//打印
// 	printf("%s %d\n", s.name, s.age);
// 	//关闭文件
// 	fclose(pf);
// 	pf = NULL;
// 	system("pause");
// 	return 0;
// }
// 
//
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct S s = {"lisi", 34};
//	struct S tmp = {0};
//
//	char arr[20] = {0};
//	//
//	//序列化和反序列化
//	//
//	//把格式化的数据转换字符串
//	sprintf(arr, "%s %d", s.name ,s.age);
//	printf("%s\n", arr);//
//	//把字符串转换为格式化的数据
//	sscanf(arr, "%s %d", tmp.name, &(tmp.age));
//	printf("%s %d\n", tmp.name, tmp.age);
//	system("pause");
//	return 0;
//}
//
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");
//	struct S s = {"张三", 20, 3.14f};
//	if(pf == NULL)
//	{
//		perror("open file for write\n");
//		system("pause");
//		return 0;
//	}
//	//写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

//
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "rb");
//	struct S s = {0};
//	if(pf == NULL)
//	{
//		perror("open file for write\n");
//		system("pause");
//		return 0;
//	}
//	//读文件
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//	//张三 20 3.14
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}


//
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	int ch = 0;
//	if(pf == NULL)
//	{
//		perror("open file for read\n");
//		system("pause");
//		return 0;
//	}
//	//读文件
//	ch = fgetc(pf);
//	putchar(ch);
//	//调整文件指针
//	//fseek(pf, 3,SEEK_SET);
//	printf("%d\n", ftell(pf));//1
//	ch = fgetc(pf);
//	putchar(ch);
//	printf("%d\n", ftell(pf));//1
//	rewind(pf);
//	printf("%d\n", ftell(pf));//1
//
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}



int main()
{
	FILE* pf = fopen("test.txt", "r");
	int ch = 0;
	if(pf == NULL)
	{
		perror("open file for read");
		system("pause");
		return 0;
	}
	//读文件
	while((ch=fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	//
	if(ferror(pf))
	{
		printf("读取失败\n");
	}
	else if(feof(pf))
	{
		printf("读取正常遇到了EOF\n");
	}
	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}
//
//pwd  print work directory
//cd   change directory
//ls   list
//mkdir  make directory
//vim --编辑器
//gcc --编译器
//eg: gcc test.c
//rm -remove
//.  当前目录
//.. 上一级目录
//
//


