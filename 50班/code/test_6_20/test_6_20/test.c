#define _CRT_SECURE_NO_WARNINGS 1

//1. 考试上课的问题
//2. 放假补课的问题（7月20---->8月10)
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for(a=1; a<=5; a++)
//	{
//		for(b=1; b<=5; b++)
//		{
//			for(c=1; c<=5;c++)
//			{
//				for(d=1; d<=5; d++)
//				{
//					for(e=1; e<=5; e++)
//					{
//						if(((b==2)+(a==3)==1)&&
//					    ((b==2)+(e==4)==1)&&
//						((c==1)+(d==2)==1)&&
//						((c==5)+(d==3)==1)&&
//						((e==4)+(a==1)==1))
//						{
//							if((a*b*c*d*e==120)&&(a+b+c+d+e==15))
//								printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c ,d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
#include <stdio.h>
//
//int main()
//{
//	int killer = 0;
//	for(killer='a'; killer<='d'; killer++)
//	{
//		if((killer!='a')+(killer=='c')+(killer=='d')
//			+(killer!='d')==3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}
//

//
//int main()
//{
//	int arr[20][20] = {0};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<20; i++)
//	{
//		for(j=0; j<20; j++)
//		{
//			if(j==0)
//			{
//				arr[i][j] = 1;
//			}
//			if(i==j)
//			{
//				arr[i][j] = 1;
//			}
//			if(i>=2 && j>=1)
//			{
//				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//			}
//		}
//	}
//
//	for(i=0; i<20; i++)
//	{
//		for(j=0; j<=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// int main()
// {
// // 	int a[] = {1,2,3,4};
// // 	printf("%d\n",sizeof(a));//16
// // 	printf("%d\n",sizeof(a+0));//4
// // 	printf("%d\n",sizeof(*a)); //4
// // 	printf("%d\n",sizeof(a+1));//4
// // 	printf("%d\n",sizeof(a[1]));//4
// // 	printf("%d\n",sizeof(&a));  //4
// // 	printf("%d\n",sizeof(*&a));//16
// // 	printf("%d\n",sizeof(&a+1));//4
// // 	printf("%d\n",sizeof(&a[0]));//4
// // 	printf("%d\n",sizeof(&a[0]+1));//4
// 
// // 	char arr[] = {'a','b','c','d','e','f'};
// // 	printf("%d\n", strlen(arr));//x
// // 	printf("%d\n", strlen(arr+0));//x
// // 	//printf("%d\n", strlen(*arr));//err
// // 	//printf("%d\n", strlen(arr[1]));//err
// // 	printf("%d\n", strlen(&arr));//x
// // 	printf("%d\n", strlen(&arr+1));//x-6
// // 	printf("%d\n", strlen(&arr[0]+1));//x-1
// // 	printf("%d\n", sizeof(arr));//6
// // 	printf("%d\n", sizeof(arr+0));//4
// // 	printf("%d\n", sizeof(*arr));//1
// // 	printf("%d\n", sizeof(arr[1]));//1
// // 	printf("%d\n", sizeof(&arr));//4
// // 	printf("%d\n", sizeof(&arr+1));//4
// // 	printf("%d\n", sizeof(&arr[0]+1));//4
// 
// // 	char arr[] = "abcdef";
// // 
// // 	printf("%d\n", strlen(arr));//6
// // 	printf("%d\n", strlen(arr+0));//6
// // 	//printf("%d\n", strlen(*arr));//err
// // 	//printf("%d\n", strlen(arr[1]));//err
// // 	printf("%d\n", strlen(&arr));//6
// // 	printf("%d\n", strlen(&arr+1));//x
// // 	printf("%d\n", strlen(&arr[0]+1));//5
// 
// 
// // 	printf("%d\n", sizeof(arr));//7
// // 	printf("%d\n", sizeof(arr+0));//4
// // 	printf("%d\n", sizeof(*arr));//1
// // 	printf("%d\n", sizeof(arr[1]));//1
// // 	printf("%d\n", sizeof(&arr));//4
// // 	printf("%d\n", sizeof(&arr+1));//4
// // 	printf("%d\n", sizeof(&arr[0]+1));//4
// 
// 	//int arr[10] = {0};
// 	//int i = 0;
// 	//int *p = arr;
// 	//for(i=0; i<10; i++)
// 	//{
// 	//	printf("&arr[%d] = %p  <=====> %p\n",i, &arr[i], p+i);
// 	//}
//  
//  	//char *p = "abcdef";
//  	//printf("%d\n", sizeof(p));//4
//  	//printf("%d\n", sizeof(p+1));//4
//  	//printf("%d\n", sizeof(*p));//1
//  	//printf("%d\n", sizeof(p[0]));//1
//  	//printf("%d\n", sizeof(&p));//4
//  	//printf("%d\n", sizeof(&p+1));//4
//  	//printf("%d\n", sizeof(&p[0]+1));//4
//  	//printf("%d\n", strlen(p));//6
//  	//printf("%d\n", strlen(p+1));//5
//  	////printf("%d\n", strlen(*p));//err
//  	////printf("%d\n", strlen(p[0]));//err
//  	//printf("%d\n", strlen(&p));//x
//  	//printf("%d\n", strlen(&p+1));//x
//  	//printf("%d\n", strlen(&p[0]+1));//
// 
// 	int a[3][4] = {0};
// 	printf("%p\n", &a[0][0]);//
// 	printf("%p\n", a+1);//
// 	printf("%d\n",sizeof(a));//48
// 	printf("%d\n",sizeof(a[0][0]));//4
// 	printf("%d\n",sizeof(a[0]));//16
// 	//16--第一行的数组名单独放在sizeof内部
// 
// 	printf("%d\n",sizeof(a[0]+1));//4
// 	//4--第一行第二个元素的地址
// 
// 	printf("%d\n",sizeof(a+1));//4--第二行的地址
// 	printf("%d\n",sizeof(&a[0]+1));//4--第二行的地址
// 	printf("%d\n",sizeof(*a));//16
// 	printf("%d\n",sizeof(a[3]));//16
// 	
// 	return 0;
// }
//
//10 1 2 3 4 5 6 7 8 9 
//1 2 3 4 5 6 7 8 9 10
//
//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	int flag = 0;
//	for(i=0; i<sz-1; i++)
//	{
//		int j = 0;
//		flag = 0;
//		//每一趟的比较和交换
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 1;
//			}
//		}
//		if(flag == 0)
//			break;
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = {1,3,5,7,9,2,4,6,8,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}
//




