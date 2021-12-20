#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, temp, element[20],n;
    printf("How Many Elements Do You Want To Eneter = ? ");
    scanf("%d", &n);
    printf("Enter Elements = ");
    for (i = 0; i < n ; i++) {
        scanf("%d", &element[i]);
    }
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n ; j++){
            if (element[i] > element[j]){
                temp = element[j];
                element[j] = element[i];
                element[i] = temp;
            }
        }
    }
    pritf("Rechorded List Of Numbers = ");
    for (i = 0; i < n; i++){
        printf("%d ", element[i]);
    }
    getch();
}
