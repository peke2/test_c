#include <stdio.h>

//	後置と前置の挙動を確認する
int main()
{
	int i=0;
	int a,b,c,d;

	a=++i + ++i;
	i=0;
	b=++i + i++;
	i=0;
	c=i++ + ++i;
	i=0;
	d=i++ + i++;
	i=0;

	printf("%d,%d,%d,%d\r",a,b,c,d);
	return	0;
}