#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "CommentConvert.h"

void test()
{
	FILE*pfRead = NULL;
	FILE*pfWrite = NULL;

	pfRead = fopen("input.c", "r");
	if(pfRead == NULL)
	{
		perror("open file for read");
		exit(EXIT_FAILURE);
	}
	pfWrite = fopen("output.c", "w");
	if(pfWrite == NULL)
	{
		perror("open file for write");
		fclose(pfRead);
		pfRead = NULL;
		exit(EXIT_FAILURE);
	}
	//注释转换
	CommentConvert(pfRead, pfWrite);

	printf("转换完成\n");
	fclose(pfRead);
	fclose(pfWrite);
	pfRead = NULL;
	pfWrite = NULL;
}

int main()
{
	test();
	return 0;
}