#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
	int a;
	char b;
} test_t;
typedef struct
{
	char c;
	char q;
	char w;
	char e;
	char r;
	int i;
	test_t t;
//	char *title;
//	char *author;
//	int book_id;
//	int test;
} book_t;

int main(int argc, char **argv)
{

	book_t *prva_knjiga;
	prva_knjiga = malloc(sizeof(book_t));
	prva_knjiga->i = 1;

	prva_knjiga->c = 't';
//	int *i = &(prva_knjiga->i);
//	printf("%p, %p, %p\n", prva_knjiga, &(prva_knjiga->i), i);
//	printf("%p\n", prva_knjiga);
	printf("%d\n", prva_knjiga->i);
	return 0;
}
