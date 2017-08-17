#include <stdio.h>


//	オーバーロードしなくても、1つの書き方で複数の型に対応可能
template<class T> int add(T a, T b)
{
	return a + b;
}

class Test
{
	public:
		int value;

	public:
		Test(int num)
		{
			value = num;
		}

		int operator +(Test other)
		{
			return value + other.value;
		}
};

//	関数テンプレートの挙動
int main()
{
	Test a(4), b(7);

	int c = add(a, b);
	printf("%d+%d=%d\n", a.value, b.value, c);
}

