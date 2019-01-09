#include <stdio.h>


int main()
{
	auto a = "abcdef";
	auto b = 123;
	auto& c = b;
	//auto& c = 0;	//	NG	�萔�ւ̎Q�Ƃɂ�const���K�v
	//const auto& c = 0;	//	OK
	auto&& d = c;
	//auto&& d = 0;

	c = 456;

	printf("a=%s\n", a);	//	abcdef
	printf("b=%d\n", b);	//	456
	printf("c=%d\n", c);	//	456
	printf("d=%d\n", d);	//	456

	return 0;
}