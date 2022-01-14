#include <stdio.h>
#include <conio.h>

FILE *ftp;

void main()
{
    ftp = fopen("test.bat","w");
    fprintf(ftp,"%s", "tulip");
    fclose(ftp);
}
