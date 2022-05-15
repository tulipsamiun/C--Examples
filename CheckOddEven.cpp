#include <stdio.h>
#include <conio.h>

void main()
{
    int num, rem;
    printf("Enter Number = ");
    scanf("%d", &num);
    rem = num % 2;
    if(rem == 0)
        printf("Even");
    else
        printf("Odd");
    getch();    
}
