#include <stdio.h>

void func()
{
    char array[10];
    gets(array);
		printf("%s\n",array);
}

int main(int argc, char **argv)
{
    func();
}
