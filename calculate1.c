#include <stdio.h>
#include <math.h>

int main()
{
	int str1;
	int str2;
	printf("输入一个数：\n");
	scanf("%d",&str1);
	str2=mizycku(str1);
	printf("输入数字的平方为%d",str2);
	return 0;
}

int mizycku(int str1)
{
	int x;
	x=str1*str1;
	return x;
}
