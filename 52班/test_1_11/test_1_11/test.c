#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//
//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "rb");
//	struct S s = {0};
//	if(pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	//写文件
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", s.name, s.age, s.d);
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");
//	struct S s = {"zhangsan", 20, 5.6};
//	if(pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	//写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	//读文件 abcdef
//	printf("%c\n", fgetc(pf));//a
//	//调整文件指针
//	//fseek(pf, 3, SEEK_CUR);
//	fseek(pf, 4,SEEK_SET);
//	printf("%c\n", fgetc(pf));//e
//	printf("%c\n", fgetc(pf));//f
//	rewind(pf);
//	printf("%c\n", fgetc(pf));//a
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}
//int printf(                const char *format [, argument]... );
//int fprintf( FILE *stream, const char *format [, argument ]...);
//int scanf(                const char *format [,argument]... );
//int fscanf( FILE *stream, const char *format [, argument ]... );
//sscanf
//sprintf
//
//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
////int sprintf( char *buffer, const char *format [, argument] ... );
//
//int main()
//{
//	struct S s = {"张三", 20, 3.14};
//	struct S tmp = {0};
//	char buf[30] = {0};
//	sprintf(buf, "%s %d %lf", s.name, s.age, s.d);
//	printf("%s\n", buf);//
//	//从buf中获取一个格式化的数据放到tmp
//	sscanf(buf, "%s %d %lf", tmp.name, &(tmp.age), &(tmp.d));
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.d);
//	system("pause");
//	return 0;
//}

//
//struct S
//{
//	char name[20];
//	int age;
//	float f;
//};
////scanf针对标准输入流的格式化的输入函数
////printf 针对标准输出流的格式化输出函数
////fscanf -针对所有输入流的格式化的输入函数
////fprintf-针对所有输出流的格式化的输出函数
////sscanf
////sprintf
//
//int main()
//{
//	struct S s = {0};
//	FILE*pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		perror("fopen");
//		system("pause");
//		return 0;
//	}
//	//读文件
//	//格式化的形式读文件
//	fscanf(stdin, "%s %d %f", s.name, &(s.age), &(s.f));
//	fprintf(stdout, "%s %d %f\n", s.name, s.age, s.f);
//
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	struct S s = {"zhangsan", 20, 3.14f};
//	FILE*pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		perror("fopen");
//		system("pause");
//		return 0;
//	}
//	//写文件
//	//格式化的形式写文件
//	fprintf(pf, "%s %d %f", s.name, s.age, s.f);
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	char buf[20] = {0};
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		perror("fopen");
//		system("pause");
//		return 0;
//	}
//	//读文件
//	fgets(buf, 20, pf);
//	printf("%s", buf);
//	fgets(buf, 20, pf);
//	printf("%s", buf);
//	fgets(buf, 20, pf);
//	printf("%s", buf);
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//相对路径
//	//绝对路径
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		perror("fopen");
//		system("pause");
//		return 0;
//	}
//	//写文件
//	fputs("zhangsan\n", pf);
//	fputs("lisi\n", pf);
//	fputs("wangwu\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//相对路径
//	//绝对路径
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		perror("fopen");
//		system("pause");
//		return 0;
//	}
//	//读文件
//	printf("%c\n", fgetc(pf));
//	printf("%c\n", fgetc(pf));
//	printf("%c\n", fgetc(pf));
//
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//相对路径
//	//绝对路径
//	FILE* pf = fopen("test.txt", "w");
//	//写文件
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//
//
//	//...
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	char arr[10] = {0};
//	int ch = 0;
//	int tmp = 0;
//	printf("请输入密码:>");
//	scanf("%s", arr);
//	printf("请确认(Y/N):>");
//	//fflush(stdin);
//	while((tmp=getchar()) != '\n')
//	{
//		//printf("%c ", tmp);
//	}
//	ch = getchar();
//	if(ch == 'Y')
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//struct S
//{
//	int n;
//	int *arr;
//};
//
//int main()
//{
//	struct S*ps  = (struct S*)malloc(sizeof(struct S));
//	int i = 0;
//	ps->n = 10;
//	ps->arr = (char *)malloc(10*sizeof(char));
//	for(i=0; i<10; i++)
//	{
//		ps->arr[i] = i+1;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%s\n", ps->arr[i]);
//	}
//
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//
//struct S
//{
//	int n;//4
//	char arr[];//柔性数组成员
//};
//
//int main()
//{
//	struct S* p = (struct S*)malloc(sizeof(struct S)+10*sizeof(char));
//	int i = 0;
//	struct S* ptr = NULL;
//	p->n = 10;
//	for(i=0; i<10; i++)
//	{
//		p->arr[i] = i+1;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d\n", p->arr[i]);
//	}
//	//
//	/*ptr = realloc(p, sizeof(struct S)+20*sizeof(char));
//	if(ptr != NULL)
//	{
//	p = ptr;
//	}
//	p->n = 20;
//	for(i=0; i<20; i++)
//	{
//	p->arr[i] = i+1;
//	}*/
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}



//struct S
//{
//	int n;
//	char arr[];//柔性数组成员
//};

//struct S
//{
//	int n;//4
//	char arr[];//柔性数组成员
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//?
//	system("pause");
//	return 0;
//}



//
//void test(int *p)
//{
//	free(p);
//}
//int main()
//{
//	int *p = (int *)malloc(40);
//	test(p);
//	//使用
//	//free(p);
//	//p = NULL;
//
//	return 0;
//}