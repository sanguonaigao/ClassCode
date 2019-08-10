#define _CRT_SECURE_NO_WARNINGS 1

//柔性数组
//C99

//struct S
//{
//	int num;
//	char arr[0];//柔性数组成员
//};

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
//struct S
//{
//	int num;
//	char arr[];//柔性数组成员
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S));
//	struct S* p = (struct S*)malloc(sizeof(struct S)+20*sizeof(char));
//	if(p != NULL)
//	{
//		p->num = 100;
//		strcpy(p->arr, "hello bit");
//
//		printf("%d\n", p->num);
//		printf("%s\n", p->arr);
//
//		free(p);
//	}
//
//	return 0;
//}
//
//struct S
//{
//	int num;
//	char* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if(ps == NULL)
//		return 0;
//	ps->num = 100;
//	ps->arr = (char*)malloc(20*sizeof(char));
//	strcpy(ps->arr, "hello bit");
//
//	printf("%d\n", ps->num);
//	printf("%s\n", ps->arr);
//	
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//
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

#include <errno.h>
#include <string.h>
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	int ch = 0;
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	int ch = 0;
//	char buf[20] = {0};
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fgets(buf, 20, pf);
//	printf("%s", buf);
//	fgets(buf, 20, pf);
//	printf("%s", buf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	int ch = 0;
//	char buf[20] = {0};
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputs("hello bit\n", pf);
//	fputs("hello bit\n", pf);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//
//
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
//	struct S s = {0};
//
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//
//int main()
//{
//	struct S s = {"zhangsan", 20, 59.5f};
//
//	FILE* pf = fopen("test.txt", "w");
//	int ch = 0;
//	char buf[20] = {0};
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




struct S
{
	char name[20];
	int age;
	float score;
};

//size_t fwrite( const void *buffer, size_t size, size_t count, FILE *stream );

//
//int main()
//{
//	struct S s = {"zhangsan", 20, 59.5f};
//
//	FILE* pf = fopen("test.txt", "wb");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fwrite(&s, sizeof(s), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//size_t fread( void *buffer, size_t size, size_t count, FILE *stream );
//
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
//	//二进制读文件
//	fread(&s, sizeof(s), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//stdin stdout stderr FILE*

//int main()
//{
//	struct S s = {0};
//	fscanf(stdin, "%s %d %f", s.name, &(s.age), &(s.score));
//	//fprintf(stdout, "%s %d %f\n", "张三", 20, 59.5f);
//	fprintf(stdout, "%s %d %f\n", s.name, s.age, s.);
//	return 0;
//}
//
//int sprintf( char *buffer, const char *format [, argument] ... );

//
//int main()
//{
//	struct S s = {"张三", 20, 59.5f};
//	struct S tmp = {0};
//
//	char buf[30] = {0};
//
//	//把结构体转换成字符串
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//
//	printf("字符串: %s\n", buf);
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("结构体: %s %d %f\n", tmp.name, tmp.age, tmp.score);
//	return 0;
//}
//
//int main()
//{
//
//	FILE* pf = fopen("test.txt", "r");
//	int ch = 0;
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fseek(pf, -3, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	printf("%d\n", ftell(pf));//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int main()
{
	FILE* pf = fopen("test.txt", "r");
	int ch = 0;
	if(pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	while((ch = fgetc(pf)) != EOF)
	{
		printf("%c\n", ch);
	}
	//feof
	fclose(pf);
	pf = NULL;
	return 0;
}