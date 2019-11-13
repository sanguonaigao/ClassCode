#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>

//主函数-程序的入口
//int main()
//{
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//int avg = (a+b)/2;
//	int avg = a+(b-a)/2;
//
//	printf("avg = %d\n", avg);//15
//	return 0;
//}
//

//
//1瓶汽水 1元
//2个空瓶 换一瓶汽水
//20
//


//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//20
//	//total = money;
//	//empty = money;
//	////置换
//	//while(empty>=2)
//	//{
//	//	total = total + empty/2;
//	//	empty = empty/2 + empty%2;
//	//}
//	total = money*2-1;
//
//	printf("total = %d\n", total);
//	return 0;
//}
//

#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关闭，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if(strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}