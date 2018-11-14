#include <stdio.h>
#include <string.h>

struct books
{
	char *title;
	char *author;
	int book_id;
};

int main(int argc, char **argv)
{
	struct books prva_knjiga = 
	{
		"",
		"",
		 555
	};
	// strcpy(prva_knjiga.title,"test");
	typeof(int) a=5;
	printf("%d",a);
	printf("%s",prva_knjiga.title);
	printf("%s",prva_knjiga.book_id);

	return 0;
}
