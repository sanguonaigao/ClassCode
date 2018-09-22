#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	;//空语句
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	/*if(age>=18)
//		printf("成年\n");
//	else
//		printf("未成年\n");*/
//
//	if(age<18)
//		printf("未成年\n");
//	else if(age>=18 && age<=30)
//		printf("青年\n");
//	else if(age>30 && age<=50)
//		printf("壮年\n");
//	else
//		printf("中老年\n");
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//		if(b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}
// 
// int g_val = 20;
// int main()
// {
// 	//int i = 0;
// 	//
// 	//for(i=0; i<10; i++)
// 	//{
// 	//	
// 	//}
// 
// 	char FirstName[20];//ok
// 	char firstname[20];//
// 	char first_name[10];//ok
// 	char First_Name[20];//
// 
// 	return 0;
// }
//
//
// 
// int main(){
// 	int i = 0;
// 	for(i=0; i<10; i++){
// 
// 	}
// 	return 0;
// }

//
//int main()
//{
//	int num = 2;
//	if(5 == num)
//		printf("hehe\n");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i++)
//	{
//		//if(i%2==1)
//		//	printf("%d ", i);
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
//		printf("输入有误\n");
//		break;
//	}
//
//	//if(1 == day)
//	//	printf("星期1\n");
//	//else if(2 == day)
//	//	printf("星期2\n");
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:n++;
//		case 2:m++;n++;break;
//		}
//	case 4:m++;break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//
//牛客网-app
//
//
//int main()
//{
//	int i = 1;
//
//	while(i<=10)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//
//int main()
//{
//	//int ch = 0;
//	//ch = getchar();
//	//putchar(ch);
//	int ch = 0;
//	//EOF
//	//EOF -- end of file
//
//	while((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;//初始化
//	while(i<=10)//判断
//	{
//		printf("%d ", i);
//		i++;//调整
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
#include <windows.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	for(i=0; i<=13; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	//int i = 0;
//
//	//for(i=0; i<10; i++)
//	//{
//	//	Sleep(100);
//	//	printf("%d\n", i);
//	//	i = 0;
//	//}
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
// int main()
// {
// 	int x, y;
// 	for (x = 0, y = 0; x<2, y<5; ++x, y++)
// 	{
// 		printf("hehe\n");
// 	}
// 	//1
// 	//2
// 	//5
// 	return 0;
// }


//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//...
//
//#include <string.h>
//
//int main()
//{
//	//char arr[] = "abc";
//	//a b c \0
//	//0 1 2 3
//	//
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//
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

