#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;//4
//	//printf("%p\n", &a);
//	int * p = &a;//指针变量
//	*p = 20;//解引用操作
//	printf("%d\n", a);
//
//	//char ch = 'w';
//	//char * pc = &ch;
//	return 0;
//}
//
//int main()
//{
//	char ch = 'w';
//	int a = 10;
//	double d = 3.14;
//	char* pc = &ch;
//	int* pa = &a;
//	double* pd = &d;
//
//	printf("%d\n", sizeof(ch));//1
//	printf("%d\n", sizeof(a)); //4
//	printf("%d\n", sizeof(d)); //8
//
//	printf("%d\n", sizeof(pc));//4
//	printf("%d\n", sizeof(pa)); //4
//	printf("%d\n", sizeof(pd)); //4
//
//	//64
//	return 0;
//}

//自定义类型-int-float
//struct PeoInfo
//{
//	char name[20];
//	short age;
//	char sex[10];
//	short hight;
//	float weight;
//};
//
//int main()
//{
//	struct PeoInfo p = {"张三", 20, "男", 170, 88.6f};
//	struct PeoInfo* ptr = &p;
//	//printf("%s %d\n", p.name, p.age);
//	//printf("%s %d\n", (*ptr).name, (*ptr).age);
//	printf("%s %d\n", ptr->name, ptr->age);
//	return 0;
//}

//
//int main()
//{
//	int age = 8;
//
//	if(age<16)
//	{
//		printf("少年\n");
//		printf("不能去网吧\n");
//	}
//	else if(age>=16 && age<22)
//		printf("青年\n");
//	else if(age>=22 && age<40)
//		printf("壮年\n");
//	else if(age>=40 && age<60)
//		printf("中老年\n");
//	else
//		printf("老不死\n");
//
//	/*if(age>=18)
//	printf("成年\n");
//	else
//	printf("未成年\n");*/
//
//
//	/*if(age>=18)
//	printf("成年\n");*/
//
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//	{
//		if(b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 10;//1
//	int a=10;//2
//
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//
//	}
//	return 0;
//}
// 
// int main()
// {
// 	int age = 10;
// 	if(5 == age)
// 	{
// 		printf("hehe\n");
// 	}
// //  	if(age = 5)
// //  		printf("hehe\n");
// 
// 	return 0;
// }
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i+=2)
//	{
//		printf("%d ", i);
//	}
//
//// 	for(i=1; i<=100; i++)
//// 	{
//// 		if(i%2 == 0)
//// 			;
//// 		else
//// 			printf("%d ", i);
//// 	}
//	return 0;
//}
//
//int main()
//{
//	int day = 4;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//
//	/*if(1 == day)
//	{
//		printf("星期1");
//	}
//	else if(2 == day)
//	{
//		printf("星期2");
//	}
//	else if(3 == day)
//	{
//		printf("星期3");
//	}*/
//	return 0;
//}
//
//
//int main()
//{
//	int day = 4;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int n = 1;int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:n++;
//		case 2:m++;n++;break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	//5 3-8
//	//5 4
//	//4 3
//	//
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//int main()
//{
//	while(1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while(i<=10)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	/*int ch = getchar();
//	putchar(ch);
//	ch = getchar();
//	putchar(ch);
//	ch = getchar();
//	putchar(ch);*/
//	int ch = 0;
//	////EOF-end of file
//
//	//while((ch=getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	//while((ch=getchar()) != EOF)
//	//{
//	//	if(ch<'0' || ch>'9')
//	//		continue;
//	//	putchar(ch);
//	//}
//
//	while((ch=getchar()) != EOF)
//	{
//		if(ch>='a' && ch<='z')
//		{
//			putchar(ch-32);
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 1;//初始化
//
//	while(i<=10)//判断
//	{
//		printf("%d ", i);
//		i++;//调整
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 1;//初始化
//	for(i=1; i<=10; i++)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		if(i==5)
//			printf("hehe");
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=11; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	return 0;
//}

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	//1
	for(i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	//2
	for(i=0; i<=9; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}