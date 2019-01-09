#include <stdio.h>

//	後置と前置の挙動を確認する
int main()
{
	int a = 0;

	//	~	ビットの反転
	//	!	0 -> 1、!0 -> 0

	printf("%010x\n", ~a);	//	00ffffffff
	printf("%010x\n", !a);	//	0000000001

	a = 0xffffffff;

	printf("%010x\n", ~a);	//	0000000000
	printf("%010x\n", !a);	//	0000000000

	a = 0xf0f0f0f0;

	printf("%010x\n", ~a);	//	000f0f0f0f
	printf("%010x\n", !a);	//	0000000000

	return	0;
}