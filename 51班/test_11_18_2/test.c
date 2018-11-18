#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>

struct S
{
	char name[20];
	int age;
};

// size_t fwrite( const void *buffer, size_t size, size_t count, 
// 			  FILE *stream );


//int main()
//{
//	struct S s = {"张三", 20};
//
//	FILE* pf = fopen("test.txt", "wb");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写操作
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	struct S s = {0};
//
//	FILE* pf = fopen("test.txt", "rb");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读操作
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d\n", s.name, s.age);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	int ch = 0;
//	if(pf == NULL)
//		return 0;
//
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);
//	putchar(ch);
//
//	printf("%d\n", ftell(pf));//
//	//fseek(pf, 3,SEEK_CUR);
//	//ch = fgetc(pf);
//	//putchar(ch);
//
//	//fseek(pf, -2,SEEK_CUR);
//	//ch = fgetc(pf);
//	//putchar(ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//IDE-集成开发环境
//
// 
// int main()
// {
// 	FILE* pf = fopen("test.txt", "r");
// 	int ch = 0;
// 	if(pf == NULL)
// 	{
// 		perror("hehe");
// 		return 0;
// 	}
// 	fclose(pf);
// 	pf = NULL;
// 	return 0;
// }
//pwd   print work directory 
//ls   list 列出当前目录下的文件，文件夹
//cd change directory 切换目录
//mkdir  code -创建文件夹
//rm -rf code -删除文件夹
//vim--编辑器
//普通模式-->i--->插入模式（写代码）--->ESC-->普通模式-->:-->命令行模式
//
//gcc-C语言的编译器
//


//声明外部符号

extern int Add(int, int);

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}