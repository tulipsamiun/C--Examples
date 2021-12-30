#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int i, n, flag = 0;
    char ch[20];
    printf("Enter String = ");
    scanf("%s", ch);
    n = strlen(ch);
    for(i = 0; i < n; i++){
        if(ch [i] != ch[n-1 - i]){
            flag = 1;
        }
    }
    if( flag == 1) printf("Not Palindrom");
    else printf ("Palindrom");
    getch();
}
