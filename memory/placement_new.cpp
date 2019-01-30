#include <stdio.h>
#include <cstdlib>


class Sample
{
	public:
		Sample(const char *text="hello")
		{
			printf("ctor [%s]\n", text);
		}

		~Sample()
		{
			printf("dtor\n");
		}


};


int main()
{
	Sample *p = (Sample *)std::malloc(sizeof(Sample)*3);
	Sample *s = new (p) Sample();

	delete s;

	return 0;
}