#include <stdio.h>

int main()
{
    float base, height, area;
    printf("Enter height ");
    scanf("%f", &height);
    printf("Enter base ");
    scanf("%f", &base);
    area = (height * base)/ 2 ;
    printf("Area = %f", area);
    return 0;
}

