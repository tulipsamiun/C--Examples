#include <stdio.h>
int factorial(int n){
    int result;
    if(n == 0 ) 
    return 1;
    result = n * factorial(n-1);
}

int main()
{
    int n, fact;
    printf("Enter Value For n = ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("Factorial n = %d", fact);
    getch();
}
