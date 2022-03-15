#include <stdio.h>
#include <conio.h>

void transfer(int n, char from, char temp, char to){
    if( n > 0) {
        transfer(n-1, from, to, temp);
        printf("\n\t%d %c->%c",n, from, to);
        transfer(n-1, temp, from, to);
    }
    return;
}

void main()
{
    int n;
    printf("Enter Value For n = ");
    scanf("%d", &n);
    transfer(n, 'L', 'C', 'R');
    getch();
}
