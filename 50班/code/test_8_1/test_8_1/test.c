#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE*pf = fopen("test.txt", "r");
	int ch = 0;
	if(pf == NULL)
	{
		return 0;
	}
	//abcdef
	putchar(fgetc(pf));//a
	putchar(fgetc(pf));//b
	ch = fgetc(pf);//
	putchar(ch);//c
	ungetc(ch, pf);
	putchar(fgetc(pf));//c
	fclose(pf);
	pf = NULL;
	return 0;
}



//
//int main()
//{
//	FILE*pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	putchar(fgetc(pf));
//	printf("%d\n", ftell(pf));//abcdef
//	fseek(pf, -1, SEEK_END);
//	putchar(fgetc(pf));
//	fseek(pf, 0, SEEK_SET);
//	putchar(fgetc(pf));
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// 
// int main()
// {
// 	char passwd[20] = {0};
// 	int ch = 0;
// 	printf("请输入密码:>");
// 	scanf("%s", passwd);
// 	printf("请确认密码(Y/N):>");
// 	fflush(stdin);
// 	ch = getchar();
// 	if(ch == 'Y')
// 	{
// 		printf("确认成功\n");
// 	}
// 	else if(ch == 'N')
// 	{
// 		printf("确认失败\n");
// 	}
// 	return 0;
// }

//
//struct S
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//
//int main()
//{
//	struct S s = {0};
//	FILE*pf = fopen("test.txt", "rb");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//读
//	fread(&s, sizeof(s), 1, pf);
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	struct S s = {"zhangsan", 20, "男"};
//	FILE*pf = fopen("test.txt", "wb");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//写
//	fwrite(&s, sizeof(s), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// scanf---stdin
// printf---stdout

//fscanf
//fprintf

//sscanf
//sprintf
//
//struct S
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//
// int main()
// {
// 	char buf[100] = {0};
// 	struct S tmp = {0};
// 	struct S s = {"zhangsan", 20, "男"};
// 	sprintf(buf, "%s %d %s", s.name, s.age, s.sex);
// 	printf("%s\n", buf);
// 	sscanf(buf, "%s %d %s", tmp.name, &(tmp.age), tmp.sex);
// 	printf("%s %d %s\n", tmp.name, tmp.age, tmp.sex);
// 	return 0;
// }



//fscanf
//fprintf
//针对所有流的格式化的输入输出函数

//int main()
//{
//	struct S s = {"zhangsan", 20, "男"};
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		return;
//	}
//	//...
//	fprintf(pf, "%s %d %s\n", s.name, s.age, s.sex);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	struct S s = {0};
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		return;
//	}
//	//...
//	fscanf(stdin, "%s %d %s", s.name, &(s.age), s.sex);
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//深信服


//test.exe test.c test.c.bak
//
//int main(int argc, char* argv[], char*envp[])
//{
//	FILE* pfRead = NULL;
//	FILE* pfWrite = NULL;
//	int ch = 0;
//	if(argc != 3)
//	{
//		printf("参数有误\n");
//		return 0;
//	}
//	pfRead = fopen(argv[1], "r");
//	if(pfRead == NULL)
//	{
//		perror("open file for read");
//		exit(EXIT_FAILURE);
//	}
//	pfWrite = fopen(argv[2], "w");
//	if(pfWrite == NULL)
//	{
//		fclose(pfRead);
//		perror("open file for write");
//		exit(EXIT_FAILURE);
//	}
//	//文件操作
//	while((ch=fgetc(pfRead)) != EOF)
//	{
//		fputc(ch, pfWrite);
//	}
//
//	fclose(pfRead);
//	fclose(pfWrite);
//	pfWrite = NULL;
//	pfRead = NULL;
//
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "a");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//
//	fputs("hello bit.\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	char arr[20];
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		perror("open file for read");
//		exit(EXIT_FAILURE);
//	}
//	//读
//	//fgets(arr, 20, pf);
//	//fgets(arr, 20, stdin);
//	//printf("%s", arr);
//	puts("hehe");
//	//fgets(arr, 20, pf);
//	//printf("%s", arr);
//	//fgets(arr, 20, pf);
//	//printf("%s", arr);
// 	//printf("%c", fgetc(pf));
//// 	putchar(getc(pf));
//// 	putchar(getc(pf));
//// 	putchar(getc(pf));
//// 	putchar(getc(pf));
//// 	putchar(getc(pf));
//
//
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	FILE*pf = fopen("test.txt", "a");
//	if(pf == NULL)
//	{
//		perror("open file for write");
//		exit(EXIT_FAILURE);
//	}
//	//写
//	fputc('b', stdout);
//	fputc('i', pf);
//	fputc('t', pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
// 
// int main()
// {
// 	int ch = getchar();
// 	putchar(ch);
// 	//
// 	FILE* pf = fopen("test.txt", "w");
// 	////..
// 	////读写
// 	////
// 
// 	fclose(pf);
// 	//pf = NULL;
// 
// 	return 0;
// }

//FILE 
//FOPEN_MAX
// int main()
//{
//	int *p = (int*)malloc(INT_MAX);
//	if(p == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("use malloc");
//		return 0;
//	}
//	//...
//	free(p);
//	p = NULL;
//	return 0;
//}