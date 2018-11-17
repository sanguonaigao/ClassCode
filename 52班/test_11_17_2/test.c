#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//int main()
//{
//// 	while(1)
//// 		printf("hehe\n");
//	int i = 1;
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
// int  main()
// {
// 	int ch = 0;
// 	//
// 	//EOF---end of file
// 	//
// // 	while((ch=getchar()) != EOF)
// // 	{
// // 		if(ch<'0' || ch>'9')
// // 			continue;
// // 		putchar(ch);
// // 	}
// 
// // 	int ch = getchar();//\n
// // 	putchar(ch);
// // 
// // 	ch = getchar();
// // 	putchar(ch);
// 	return 0;
// }

//int main()
//{
//	int i = 1;//初始化
//
//	while(i<=10)//判断
//	{
//		printf("%d ", i);
//
//
//		i++;//调整
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
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
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//// 	int i = 0;
//// 	for(i=0; i<10; i++)
//// 	{
//// 		printf("hehe\n");
//// 		printf("%d\n", i);
//// 		i-=2;
//// 	}
//	return 0;
//}
// 
// int main()
// {
// 	int arr[10] = {0};
// 	int i = 0;
// 	for(i=0; i<10; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	for(i=100; i<201; i++)
// 	{
// 
// 	}
// 	return 0;
// }

//
//int  main()
//{
//	//for(;;)
//	//{
//	//	printf("hehe\n");
//	//}
//// 
//// 	int i = 0;
//// 	for(; i<10; i++)
//// 	{
//// 		printf("%d ",i);
//// 	}
//
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
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; y<5,x<2; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//welcome to bit!!!!
//##################
//w################!
//we##############!!
//wel############!!!
//...
//welcome to bit!!!!
//#include <windows.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
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

//#include <string.h>
//
//int main()
//{
//	//"123456"
//	int i = 0;
//	char password[20] = {0};
//	for(i=0; i<3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	//
//	if(i == 3)
//		printf("三次密码输入错误，退出程序\n");
//	return 0;
//}
//
//
//int main()
//{
//	int i = 1;
//	
//	do 
//	{
//		if(i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	//调试
//	for(j=1; j<=3; j++)
//	{
//		ret = 1;
//		for(i=1; i<=j; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;	
//}

//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	//调试
//	for(j=1; j<=3; j++)
//	{
//		ret = ret * j;
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;	
//}
//


//
//商汤科技
//
int binary_search(int arr[], int key, int left, int right)
{
	while(left<=right)
	{
		int mid = left+(right-left)/2;
		if(arr[mid] > key)
		{
			right = mid-1;
		}
		else if(arr[mid] < key)
		{
			left = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//找不到
}
int main()
{
 	int arr[] = {1,2,3,4,5,6,7,8,9,10,20};
	int key = 17;
 	int left = 0;
 	int right = sizeof(arr)/sizeof(arr[0])-1;
	int ret = binary_search(arr, key, left, right);
	if(ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了:%d\n", ret);
	}







 	
	//int a = 2147483646;
	//int b = 2147483646;
	//int c = a+(b-a)/2;
	////int c = (a+b)/2;
	//printf("%d\n", c);
	return 0;
}





