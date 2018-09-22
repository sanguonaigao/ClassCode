#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>

// int main()
// {
// 	//welcome to bit!!!!!!
// 	//####################
// 	//w##################!
// 	//we################!!
// 	//wel##############!!!
// 	//....
// 	char arr[] = "abc";
// 	//a b c \0
// 	//0 1 2 3
// 	char arr1[] = "welcome to bit!!!!!!";
// 	char arr2[] = "####################";
// 	int left = 0;
// 	int right = strlen(arr1)-1;
// 
// 	while(left<=right)
// 	{
// 		arr2[left] = arr1[left];
// 		arr2[right] = arr1[right];
// 		printf("%s\n", arr2);
// 		Sleep(1000);
// 		system("cls");
// 		left++;
// 		right--;
// 	}
// 
// 	return 0;
// }

//
//int main()
//{
//	int x = 0, y = 0;
//
//	for (x = 0, y = 0; y<7,x<4 ; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for(; i<10; i++)
//	{
//		int j = 0;
//		for(;j<10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	0-9
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	for(i=0; i<=9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	for(i=0; i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//// 	int i = 0;
//// 	for(i=0; i<10; i++)
//// 	{
//// 		//Sleep(1000);
//// 		printf("%d\n", i);
//// 		i = 0;
//// 	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//
//	for(i=1; i<=10; i++)
//	{
//		if(5 == i)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;//初始化
//
//	while(i<10)//判断
//	{
//		printf("%d\n", i);
//
//		i++;//调整
//	}
//	return 0;
//}

//int main()
//{
//	//EOF  end of file
//// 	int ch = getchar();
//// 	printf("%c\n", ch);
//	int ch = 0;
//	while((ch=getchar()) != EOF)
//	{
//		putchar(ch);
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
//
//	}
//	return 0;
//}

//1 2 3 4 6 7 8 9 10
//

//
//#include <stdio.h>
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{case 1:	m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:	n++;
//		case 2:m++;n++;break;
//		}
//	case 4:m++;break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);//
//
//
//
//	return 0;
//}
//
//int main()
//{
//	int day = 0;
//	int n = 1;
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
//	return 0;
//}


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
//// 		if(1 == i%2)
//// 		{
//// 			printf("%d ", i);
//// 		}
//// 	}
//	return 0;
//}

//
//int main()
//{
//	int num = 0;
//
//	if(5 == num)
//	{
//		printf("hehe\n");
//	}
//	//if(num == 5)
//	//{
//	//	printf("1:hehe\n");
//	//}
//
//	//if(num = 5)
//	//{
//	//	printf("2:hehe\n");
//	//}
//
//	return 0;
//}
//
//int main()
//{
//	int input = 0;
//	printf("你会敲代码吗？(1/0), 如果家里有很多房子，选择-1:>");
//	scanf("%d", &input);
//	if(input == 1)
//	{
//		printf("好offer\n");
//	}
//	else if(input == 0)
//	{
//		printf("卖红薯\n");
//	}
//	else if(input == -1)
//	{
//		printf("呵呵，回去继承家产\n");
//	}
//	else
//	{
//		printf("等死\n");
//	}
//	return 0;
//}



//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for(i=1; i<=100; i++)
//	{
//		if(i%10==9)
//			count++;
//		if(i/10==9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
//
//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for(i=1; i<=100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int arr1[10] = {0};
//	int arr2[10] = {0};
//	int i = 0;
//	printf("请输入10个数字:>");
//	for(i=0; i<10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	printf("请输入10个数字:>");
//	for(i=0; i<10; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//交换
//	for(i=0; i<10; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	return 0;
//}