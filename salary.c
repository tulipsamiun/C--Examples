#include <stdio.h>

int main()
{
    float gross, net, tax; 
    printf("Gross Salary");
    scanf("%f",&gross);
    tax = 0.4 * gross;
    net =  gross - tax;
    printf("Taxes Withheld = %2f\n", tax);
    printf("Net Salary =  %2f", net);

    return 0;
}
