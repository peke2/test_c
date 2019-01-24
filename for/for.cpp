#include <stdio.h>


int main()
{
	uint32_t arr[] = {1,3,5,7,11,19};

	for(auto n : arr)
	{
		printf("%d\n", n);
	}

	return 0;
}