#include <stdio.h>
#include <conio.h>

int fibo(int x){
    if(x ==1 || x == 2)
        return 1;
    else
        return fibo(x-1) + fibo(x-2);
}

void main()
{
    int i,x;
    printf("Enter Value For x = ");
    scanf("%d", &x);
    for(i = 1; i <= x; i++)
        printf("%4d" , fibo(i));
    getch();
}
