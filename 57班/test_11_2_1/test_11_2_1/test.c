#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		//printf("%d ", i);
//		//判断i是否为素数
//		int j = 0;
//		for(j=2; j<i; j++)
//		{
//			if(i%j == 0)
//				break;
//		}
//		if(j>=i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		//printf("%d ", i);
//		//判断i是否为素数
//		int j = 0;
//		for(j=2; j<=(i/2); j++)
//		{
//			if(i%j == 0)
//				break;
//		}
//		if(j>(i/2))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//

#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=101; i<=200; i+=2)
//	{
//		//printf("%d ", i);
//		//判断i是否为素数
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//				break;
//		}
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//

//试除法
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int year=0;
//	for(year=1000; year<=2000; year++)
//	{
//		//printf("%d ", year);
//		//判断闰年
//		//if(year%4==0)
//		//{
//		//	if(year%100!=0)
//		//	{
//		//		printf("%d ", year);
//		//	}
//		//}
//		//if(year%400==0)
//		//{
//		//	printf("%d ", year);
//		//}
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//static -修饰局部变量
//作用：改变了局部变量的生命周期
//
//void test()
//{
//	static int a = 0;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//static修饰全局变量
//static改变了全局变量的作用域
//
//extern int g_val;
////static修饰函数
////改变了函数的作用域
//
//extern int Add(int x, int y);
//
//int main()
//{
//	//printf("%d\n", g_val);
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//
//	return 0;
//}
//
//#define NUM 1000
//
//int main()
//{
//	printf("%d\n", NUM);
//	return 0;
//}
//
//#define ADD(X,Y) (X+Y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	//int c = (a+b);
//	printf("c = %d\n", c);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int * p = &a;//p就是指针变量
//	printf("%d\n", sizeof(p));
//	//*p = 20;
//	//解引用
//
//	//printf("a = %d\n", a);
//
//	//printf("%p\n", &a);
//	//char ch = 'w';
//	//char * pc = &ch;
//	return 0;
////}
//
//int main()
//{
//	printf("%d\n", sizeof(char*));//
//	printf("%d\n", sizeof(short*));//
//	printf("%d\n", sizeof(int*));//
//	printf("%d\n", sizeof(float*));//
//	printf("%d\n", sizeof(double*));//
//
//	return 0;
//}

//结构体关键字-struct
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	char id[15];
//};
//
//int main()
//{
//	struct Stu * pzs = NULL;
//	struct Stu zhangsan = {"张三", 20, "男", "20190102"};
//	struct Stu lisi = {"李四", 30, "保密", "20100304"};
//	printf("%s %d %s %s\n", zhangsan.name, zhangsan.age, zhangsan.sex, zhangsan.id);
//	//->
//	pzs = &zhangsan;
//
//	printf("%s %d %s %s\n", (*pzs).name, (*pzs).age, (*pzs).sex, (*pzs).id);
//	printf("%s %d %s %s\n", pzs->name, pzs->age, pzs->sex, pzs->id);
//	return 0;
//}

//
//int main()
//{
//	//int age = 10;
//	//if(age>=18)
//	//{
//	//	printf("成年\n");
//	//}
//
//	/*int age = 10;
//	if(age>=18)
//	{
//	printf("成年\n");
//	}
//	else
//	{
//	printf("未成年\n");
//	}*/
//	int age = 50;
//	if(age<18)
//		printf("少年\n");
//	else if(age>=18 && age<25)
//	{
//		printf("青年\n");
//	}
//	else if(age>=25 && age<40)
//	{
//		printf("中年\n");
//	}
//	else if(age>=40 && age<70)
//	{
//		printf("中老年\n");
//	}
//	else if(age>=70 && age<100)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老不死\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//	{
//		if(b == 2)
//		{
//			printf("hehe\n");
//		}
//		else
//		{
//			printf("haha\n");
//		}
//	}
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int a=10;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	if(5 == a)
//	{
//		printf("hehe\n");
//	}
//// 	if(a == 5)
//// 	{
//// 		printf("hehe\n");
//// 	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	//for(i=1; i<=100; i++)
//	//{
//	//	if(i%2==1)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	for(i=1; i<=100; i+=2)
//	{
//		printf("%d ", i);	
//	}
//	return 0;
//}
//
//int main()
//{
//	int day = 0;
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
//// 	if(1 == day)
//// 	{
//// 		printf("星期1\n");
//// 	}
//// 	else if(2 == day)
//// 	{
//// 		printf("星期2\n");
//// 	}
//// 	...
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:	m++;
//	case 2:	n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:	n++;
//		case 2:m++;n++;break;
//		}
//	case 4:m++;break;
//	default:break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	//
//	//5 3-5
//	//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while(i)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//
//	while(i<=10)
//	{
//		if(i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
int main()
{
	int i = 0;

	while(i<=10)
	{
		
		i++;
		if(i == 5)
			continue;
		printf("%d ", i);

	}
	return 0;
}
