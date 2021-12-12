#include <stdio.h>
#include <conio.h>

int main()
{
    int day, month;
    printf("Enter Month and Day = ");
    scanf("%d%d", &month,&day);
    if(month == 2){
        if(day == 19)
            printf("Happy Birthday To Taru");
    }
    getch();
}
