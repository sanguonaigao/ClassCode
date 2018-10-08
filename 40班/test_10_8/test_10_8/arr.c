#define _CRT_SECURE_NO_WARNINGS 1

#include "arr.h"
#include <stdio.h>


void Init(int arr[], int sz, int set)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		arr[i] = set;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;

	while(left<right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}


//函数的定义
void Empty(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		arr[i] = 0;
	}
}