#include <stdio.h>

int main()
{
    char operator;
    double num1, num2;
    printf("Enter Operation Like 1 + 2 and Press Enter");
    scanf("%1lf %c  %1lf", &num1, &operator, &num2);
    switch(operator){
        case '+' : printf("%1lf + %1lf = %1lf", num1, num2 , num1 + num2);
                   break;
        case '-' : printf("%1lf - %1lf = %1lf",num1 , num2, num1 - num2);
                   break;
        case '*' : printf("%1lf * %1lf = %1lf", num1, num2 , num1 * num2);
                   break; 
        case '/' : printf("%1lf / %1lf = %1lf", num1, num2, num1 / num2 );
                   break;
        default :  printf("Enter Correct Operation.");
    }
    

    return 0;
}

