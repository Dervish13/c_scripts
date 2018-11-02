#include <stdio.h>
#include <string.h>

struct books
{
char title[50];
char author[50];
int book_id;
};

int main(int argc, char **argv)
{
struct books prva_knjiga;
prva_knjiga.book_id= 555;
strcpy(prva_knjiga.title,"test");

printf("%s",prva_knjiga.title);
printf("%s",prva_knjiga.book_id);

return 0;
}
