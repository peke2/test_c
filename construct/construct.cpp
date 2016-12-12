#include <stdio.h>
#include <string>

//	コンストラクタとデストラクタの呼び出しタイミング
//	new を使わないインスタンス作成時の初期化指定と構築・破棄タイミングの確認

class Test
{
	std::string	message;

	public:
		Test(const char *msg=NULL)
		{
			printf("インスタンス作成\n");

			if( NULL != msg )	message = msg;
			else				message = "Hello";
		}

		~Test()
		{
			printf("インスタンス削除\n");
		}

		void	say()
		{
			printf("%s\n", message.c_str());
		}
};

void sub()
{
	Test	test("あいさつ");
	test.say();
}

int main()
{
	printf("----main開始----\n");
	sub();
	printf("----main終了----\n");
	return	0;
}
