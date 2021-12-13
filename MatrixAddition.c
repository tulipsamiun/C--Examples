#include <stdio.h>
#include <conio.h>

void main()
{
    int a[2][2], b[2][2], total[2][2], i, j;
    printf("Enter Value For a and b = ");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &a[i][j]);  
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &b[i][j]);  
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j< 2; j++){
            total[i][j] = a[i][j] + b[i][j];
            printf("\t%d", total[i][j]);  
        }
        printf("\n");
    }
    getch();
}
