#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef vector<int> Vector;

Vector getVector()
{
	Vector v = {1,5,3,7,11,13};
	return v;
}

int getValue()
{
	return 987;
}

class Rvalue
{
	public:
		string name;
		int value;

	public:
		Rvalue(const char *name, int value)
		{
			this->name = name;
			this->value = value;
			printf("初期化[%s]\n", name);
		}

		Rvalue& operator=(const Rvalue &rv)
		{
			this->name = rv.name;
			this->value = rv.value;
			cout << "コピー\n";
			return *this;
		}
/*
		Rvalue& operator=(Rvalue&& rv)
		{
			this->name = rv.name;
			this->value = rv.value;
			printf("右辺値参照\n");
		}*/
};

Rvalue getRvalue()
{
	Rvalue rv("hello", 147);
	return rv;
}


int main()
{
	//	以下の解釈？
	//Vector vec = getVector();		//	返ってきた値(一時オブジェクト)はコピーされる
	Vector&& vec = getVector();		//	返ってきた値(一時オブジェクト)の参照を取得する

	for(auto v : vec)
	{
		printf("%d\n", v);
	}

	printf("\n");

	int &&num = getValue();

	printf("num=%d\n", num);

	printf("\n");

	//Rvalue rv = getRvalue();
	Rvalue&& rv = getRvalue();
	printf("name=%s\n", rv.name.c_str());
	printf("value=%d\n", rv.value);

	Rvalue rv2("bye", 579);
	Rvalue rv3 = rv2;

	rv3.name = "done";
	
	printf("[%s][%s]\n", rv2.name.c_str(), rv3.name.c_str());

	return 0;
}