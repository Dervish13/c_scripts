#include <stdio.h>

int i=0;
int printaj(int i)
{
				printf("%d\n",i);
				i+=3;
}

int main()
{
while (i<5)
	{
				printaj(i);
				i+=10;
	}
	return 0;
}
