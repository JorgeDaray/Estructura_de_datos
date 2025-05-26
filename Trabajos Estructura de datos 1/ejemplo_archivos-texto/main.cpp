#include <stdio.h>
#include <stdlib.h>
#include <string>

int main () {

char str1[10], str2[10], str3[10], str4[10];

FILE * fp;

fp = fopen ("file.txt", "w+");

fputs("We are in 2012", fp);

rewind(fp);
//sets the file position to the beginning of the file of the given stream.

fgets(str1, 4, fp);
fgets(str2, 5, fp);
fgets(str3, 6, fp);
fgets(str4, 7, fp);

//We could read with fgets,what is the difference? what are requirements to do it?

printf("Read String1 |%s|\n", str1 );

printf("Read String2 |%s|\n", str2 );

printf("Read String3 |%s|\n", str3 );

printf("Read Integer |%s|\n", str4 );

fclose(fp);

return(0);

}
