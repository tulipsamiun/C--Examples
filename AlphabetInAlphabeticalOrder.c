#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
    int i, j, n;
    char element[20], temp;
    printf("How Many Elements Do You Want To Enter = ");
    scanf("%d", &n);
    printf("Enter Elements ");
    for(i = 0; i < n; i++){
        scanf("%s", &element[i]);
    }
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(toupper(element[i]) > toupper(element[j])){
                temp = element[j];
                element[j] = element[i];
                element[i] = temp;
            }
        }
    }
    printf("\nOrdered List Of Elements");
    for(i = 0; i < n; i++){
        printf("\n%c", element[i]);
    }
    getch();
}
