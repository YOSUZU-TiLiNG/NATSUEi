#include "myfunc.h"
#include <stdio.h>

void swap(int *pa, int *pb)
{
	// 实际内容
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void maxminArrint(int arrint[], int arrLen, int *max, int *min)
{
	/*
	使用的头文件和函数：
	<stdio.h>
	*/
	// 数据检查A0
	if (arrLen == 0)
	{
		printf("ERROR maxminArrint() A0\n");
		return;
	}
	// 实际内容
	else
	{
		int i;
		*max = *min = arrint[0];
		for (i = 1; i < arrLen; i++)
		{
			if (arrint[i] > *max)
			{
				*max = arrint[i];
			}
			if (arrint[i] < *min)
			{
				*min = arrint[i];
			}
		}
	}
}

int numLen(int num)
{
	// 实际内容
	if (num < 0)
	{
		num = -num;
	}
	int i = 0;
	do
	{
		i++;
		num /= 10;
	} while (num > 0);
	return i;
}

int powxy(int x, int y)
{
	/*
	使用的头文件和函数：
	<stdio.h>
	*/
	// 数据检查A0
	if (x < 0 || y < 0 || (x == 0 && y == 0))
	{
		printf("ERROR powxy() A0\n");
		return -1;
	}
	// 实际内容
	int ret = x;
	if (x == 0 && y > 0)
	{
		ret = 0;
	}
	else if (x > 0 && y == 0)
	{
		ret = 1;
	}
	else if (x > 0 && y > 0)
	{
		int i;
		for (i = 1; i < y; i++)
		{
			ret *= x;
		}
	}
	return ret;
}

int gcd(int A, int B)
{
	/*
	使用的头文件和函数：
	<stdio.h>
	*/
	// 数据检查A0
	if (A <= 0 || B <= 0)
	{
		printf("ERROR gcd() A0\n");
		return -1;
	}
	// 实际内容
	int max = A > B ? A : B;
	int min = A < B ? A : B;
	while ((max % min) != 0)
	{
		int temp = min;
		min = (max % min);
		max = temp;
	}
	return min;
}

char* numToMonth(int num)
{
	// 实际内容
	static char month[12][10] = {
		"January", "February", "March", "April",
		"May", "June", "July", "August",
		"September", "October", "November", "December"};
	return month[num - 1];
}
