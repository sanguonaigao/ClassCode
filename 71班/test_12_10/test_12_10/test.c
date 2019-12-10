#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	char arr[3] = {0};
//	scanf("%s", arr);
//	printf("%s\n", arr);
//	return 0;
//}
//
//代码块
//
//
//int main()
//{
//	int age = 16;
//
//	if(age<18)
//	{
//		printf("未成年\n");
//		printf("不能上网\n");
//	}
//	else if(age>=18 && age<30)
//		printf("青年\n");
//	else if(age>=30 && age<=50)
//		printf("中年\n");
//	else if(age>50 && age<=80)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//	/*if(age<18)
//	printf("未成年\n");
//	else
//	printf("成年\n");*/
//
//	/*if(age<18)
//	printf("未成年\n");*/
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
//	//int a = 10;
//	//int i = 0;
//	//for(i=0; i<10; i++)
//	//{
//
//	//}
//	char firstname[20];
//	char first_name[20];
//	char FirstName[20];
//
//	return 0;
//}

//
//int main()
//{
//	int num = 1;
//	if(5 == num)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	if(a % 2 == 1)
//		printf("%d\n", a);
//
//	return 0;
//}
//


//int main()
//{
//	int i = 1;
//	while(i<=100)
//	{
//		if(i%2==1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while(i<=100)
//	{
//		printf("%d ", i);
//		i+=2;
//	}
//	return 0;
//}
//
//int main()
//{
//	int day = 1;
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
//		break;
//	}
//	/*if(1 == day)
//	{
//		printf("星期1\n");
//	}
//	else if(2 == day)
//	{
//		printf("星期2\n");
//	}
//	else if(3 == day)
//	{
//		printf("星期3\n");
//	}*/
//	return 0;
//}

//
//int main()
//{
//	int day = 1;
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
//		break;
//	}
//	
//	return 0;
//}

//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:	n++;
//		case 2:	m++;n++;break;
//		}
//	case 4:m++;break;
//	default:break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//
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
//	//int ch = getchar();
//	////printf("%c\n", ch);
//	//putchar(ch);
//	//EOF - end of file
//
//	/*int ch = 0;
//	while((ch=getchar()) != EOF)
//	{
//	putchar(ch);
//	}
//	*/
//	char arr[20] = {0};
//	int ch = 0;
//	printf("请输入密码:>");
//	scanf("%s", arr);
//	printf("请确认(Y/N):>");
//	while(getchar() != '\n')
//	{
//		;
//	}
//	ch = getchar();
//	if(ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while(i<10)
//	{
//		printf("hehe\n");
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//
//	for(i=1; i<=10; i++)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i); 
//	}
//
//	return 0;
//}
//
//int main()
//{
//	/*int i = 0;
//	for(i=1; i<=10; i++)
//	{
//	printf("%d ", i);
//	i = 1;
//	}*/
//
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	for(i=0; i<=12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//
//int main()
//{
//// 	for(;;)
//// 	{
//// 		printf("hehe\n");
//// 	}
//	int i = 0;
//	int j = 0;
//	int count = 1;
//	for(; i<10; i++)
//	{
//		for(; j<10; j++)
//		{
//			printf("%d:hehe\n", count);
//			count++;
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while(i<=10);
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		ret = 1;
//		for(i=1; i<=n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("sum = %d\n", sum);
//	return 0;
//}


int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	int sum = 0;
	//1 2 6 = 9
	for(n=1; n<=3; n++)
	{
		ret = ret*n;
		sum = sum + ret;
	}

	printf("sum = %d\n", sum);
	return 0;
}