#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{

if ( argc<3){

				fprintf(stderr,"daj 2\n");
				return 1;
}
char *username =  calloc(10,sizeof(char));
char *password = calloc(10,sizeof(char));


//printf("%s sa lozinkom %s\n",username,password);
strcpy(username,argv[1]);
strcpy(password,argv[2]);
//strcpy(username,argv[1]);

printf("%s sa lozinkom %s\n",username,password);









return 0;
}
