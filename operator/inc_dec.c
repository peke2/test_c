#include <stdio.h>

//	後置と前置の挙動を確認する
int main()
{
	int i=0;
	int a,b,c,d;

	a=++i + ++i;
printf("ai=%d\n", i);
	i=0;
	//b=++i + i++;
	b=++i + i;
printf("bi=%d\n", i);
	i=0;
	c=i++ + ++i;
printf("ci=%d\n", i);
	i=0;
	d=i++ + i++;
printf("di=%d\n", i);
	i=0;

	printf("%d,%d,%d,%d\n",a,b,c,d);
	return	0;
}