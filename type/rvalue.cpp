#include <stdio.h>
#include <vector>

typedef std::vector<int> Vector;

Vector getVector()
{
	Vector v = {1,5,3,7,11,13};
	return v;
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

	return 0;
}