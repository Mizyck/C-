#include <stdio.h>
#include <math.h>

int main()
{
	int str1;
	int str2;
	printf("����һ������\n");
	scanf("%d",&str1);
	str2=mizycku(str1);
	printf("�������ֵ�ƽ��Ϊ%d",str2);
	return 0;
}

int mizycku(int str1)
{
	int x;
	x=str1*str1;
	return x;
}
