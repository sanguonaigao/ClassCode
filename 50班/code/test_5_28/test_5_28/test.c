#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <stdio.h>


int main()
{
	double i = 20.0;
	double j = i / 7.0;
	if (j * 7.0 == i)
		printf("equal\n");
	else
		printf("not equal\n");
	return 0;
}


// int main()
// {
// 	int flag = 2;
// 	
// 	//if(flag != 0)//
// 	//if(flag == 0)//
// 
// 	//if(flag){}
// 	//if(!flag){}
// 
// 	//int age = 0;
// 	//if(age == 0){}
// 	//if(age != 0){}
// 
// 	//int num = 10;
// 	//int *p = &num;
// 	//*p = 20;
// 
// 	//int* p = NULL;
// 	//if(p == NULL)
// 	//{
// 	//	//
// 	//}
// 	//if(p != NULL)
// 	//	*p = 20;
// 
// 	int *p;
// 	if(p != NULL)
// 		*p = 10;
// 
// 	return 0;
// }
//
//int main()
//{
//	int arr1[] = {1,2,3,4};
//	int arr2[] = {5,6,7,8,9};
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int sz1 = sizeof(arr1)/sizeof(arr1[0]);
//	int sz2 = sizeof(arr2)/sizeof(arr2[0]);
//
//	for(i=0; i<sz1; i++)
//	{
//		for(j=0; j<sz2; j++)
//		{
//			if(arr1[i] == arr2[j])
//			{
//				printf("有\n");
//				n = 1;
//				break;
//			}
//		}
//		if(n == 1)
//			break;
//	}
//	if(n == 0)
//		printf("没有\n");
//	//
//	//...
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	//for(i=1; i<=100; i+=2)
//	//{
//	//	printf("%d ", i);
//	//}
//	for(i=1; i<=100; i++)
//	{
//		if(i%2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}	
//	return 0;
//}

//
//int main()
//{
//	int x = 0;
//	int y = 0;
//
//	if(x>0)
//		y = 1;
//	else if(x==0)
//		y = 0;
//	else
//		y = -1;
//
//	if(x>=0)
//	{
//		if(x>0)
//			y = 1;
//		else
//			y = 0;
//	}
//	else
//	{
//		y = -1;
//	}
//
//	if(x>0)
//		y = 1;
//	if(x==0)
//		y = 0;
//	if(x<0)
//		y = -1;
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//	{
//		if(b == 2)
//			printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
// 
// int main()
// {
// 	//if(1>2)
// 	//	printf("hehe\n");
// 	int age = 20;
// 	if(age<18)
// 	{
// 		printf("未成年\n");
// 		printf("hehe\n");
// 	}
// 	else if(age>=18 && age<=25)
// 	{
// 		printf("青年\n");
// 	}
// 	else if(age>25 && age<=45)
// 	{
// 		printf("壮年\n");
// 	}
// 	else 
// 	{
// 		printf("中老年\n");
// 	}
// 	//if(age<18)
// 	//{
// 	//	printf("未成年\n");
// 	//}
// 	//else
// 	//{
// 	//	printf("成年\n");
// 	//}
// 
// 	return 0;
// }
// int main()
// {
// 	if(1)
// 		;
// 	return 0;
// }
//
//#include <stdio.h>
//int main()
//{
//	int i=43;
//	printf("%d\n",printf("%d",printf("%d",i))); 
//	
//	return 0;
//}


//
//int main()
//{
//	int x = 16;
//	int y = 24;
//	int z = 0;
//	
//	while(z=x%y)
//	{
//		x = y;
//		y = z;
//	}
//
//	printf("%d\n", y);
//	return 0;
//}

//
//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap(int *px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;//解引用
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//
//	if(a<b)
//	{
//		Swap(&a, &b);
//	}
//	if(a<c)
//	{
//		Swap(&a, &c);
//	}
//	if(b<c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d\n",a, b, c);
//	//printf("%d %d %d\n", c, b, a);
//	return 0;
//}

// 
// int main()
// {
// 	//在线笔试
// 	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10, 11};
// 	int max = arr[0];
// 	int i = 0;
// 	int sz = sizeof(arr)/sizeof(arr[0]);
// 	for(i=1; i<sz; i++)
// 	{
// 		if(arr[i] > max)
// 		{
// 			max = arr[i];
// 		}
// 	}
// 	printf("max = %d\n", max);
// 	return 0;
// }
//
//1 2 3 4 1 2 3 4 5 6
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//
//	//int tmp = 0;
//
//	scanf("%d%d", &a, &b);
//
//	printf("a = %d b = %d\n", a, b);
//// 	tmp = a;
//// 	a = b;
//// 	b = tmp;
//	//01010--a
//	//10100--b
//	//11110--a
//	//
//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}



