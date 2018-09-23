#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// 
// int main()
// {
// 	int num = 10;
// 
// 	if(5 == num)
// 		printf("hehe\n");
// 
// 	return 0;
// }
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(1 == i%2)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(0 == i%2)
//			continue;
//		else
//			printf("%d ", i);
//	}
//	return 0;
//}
//
// 
// int main()
// {
// 	int i = 0;
// 	for(i=1; i<=100; i+=2)
// 	{
// 		printf("%d ", i);
// 	}
// 	return 0;
// }

//
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//
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
//		printf("选择错误\n");
//		break;
//	}
//	//
//	//if(1 == day)
//	//{
//	//	printf("星期1\n");
//	//}
//	//else if(2 == day)
//	//{
//	//	printf("星期2\n");
//	//}
//	//else if(3 == day)
//	//{
//	//	printf("星期3\n");
//	//}
//	////...
//	return 0;
//}
//#include <stdio.h>
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
//		case 2:m++;n++;break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//
//


//int main()
//{
//	int i = 1;//初始化部分
//
//	while(i<=10)//判断部分
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//		i++; //调整部分
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int ch = 0;
//	//EOF- end of file
//	while((ch=getchar()) != EOF)
//	{
//		if(ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	//int ch = getchar();
//	//putchar(ch);
//	return 0;
//}
//


//
//int main()
//{
//	int i = 0;
//
//	while(i<=10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=10; i++)
//	{
//		if(5 == i)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

#include <windows.h>
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=10; i++)
//	{
//		Sleep(1000);
//		printf("%d ", i);
//		i = 0;
//	}
//
//	return 0;
//}
//
//《C陷阱和缺陷》
//
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}
//

// int main()
// {
// 	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
// 	int i = 0;
// 	for(i=0; i<10; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	for(i=0; i<=9; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	return 0;
// }
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for(; i<10; i++)
//	{
//		for(; j<10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int x=0, y=0;
//	for (x = 0, y = 0; x<2,y<5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//

//
//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//.....
//welcome to bit!!!!!
//
//#include <stdio.h>
//
//int main()
//{
//	//
//	//char arr[] = "abc";
//	//a b c \0
//	//0 1 2 3
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//
//	return 0;
//}

//
//
//int main()
//{
//	int i = 0;
//	char password[10] = {0};
//	for(i=0; i<3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if(strcmp(password, "123456") == 0)
//		{
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入!\n");
//		}
//	}
//	if(i>=3)
//	{
//		printf("三次密码输入错误，退出程序\n");
//	}
//	else
//	{
//		printf("登录成功\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	do 
//	{
//		if(5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//	return 0;
//}
//

//
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int i= 0;
//	int j = 0;
//	int sum = 0;
//	//scanf("%d", &n);
//	//1+2+6=9
//	for(j=1; j<=3; j++)
//	{
//		for(i=1; i<=j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	/*while(n>0)
//	{
//		ret *= n;
//		n--;
//	}*/
//	printf("%d\n", sum);
//	return 0;
//}


int main()
{
	int n = 0;
	int ret = 1;
	int i= 0;
	int j = 0;
	int sum = 0;
	
	for(j=1; j<=3; j++)
	{
		ret *= j;
		sum += ret;
	}

	printf("%d\n", sum);
	return 0;
}






