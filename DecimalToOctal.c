#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int i, q, reminder, num, flag = 0, oct[10];
    printf("Enter Number ");
    scanf("%d", &num);
    clrscr();
    for(i =0 ;i < 10; i++){
        reminder = num % 8;
        oct[i] = reminder;
        q = num /8 ;
        num = q;
        flag = i;
        if(q == 0) break;
    }
    for(i = flag; i >= 0; i--){
        printf("%d", oct[i]);
    }
    getch();
}
