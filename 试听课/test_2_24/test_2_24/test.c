#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>

//
//int main()
//{
//	int num1 = 2147483646;//2147483646
//	int num2 = 2147483646;
//
//	//int avg = (num1+num2)/2;
//	//int avg = num1/2+num2/2;
//	int avg = num1 + (num2-num1)/2;
//
//	//3/2=1
//	//5/2=2
//	//4
//
//	printf("avg = %d\n", avg);
//
//	return 0;
//}


#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//             0 1 2 3 4 5 6 7 8 9
	for(i=0; i<=12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	return 0;
}

//gcc - <=11



