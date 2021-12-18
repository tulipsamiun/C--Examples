#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int queue[20], i, n;


void firstInput(){
    printf("\nEnter Number of Elements = ");
    scanf("%d", &n);
    printf("Enter Elements");
    for(i = 0; i < n; i++){
        scanf("%d", &queue[i]);
    }
}

void add(){
    int nn;
    printf("How Many ELelments You Wants To Add = ");
    scanf("%d", &nn);printf("\nEnter Elements");
    for(i = n ;i < n + nn; i++){
        scanf("%d", &queue[i]);
    }
    n = n + nn;
}

void removeElement(){
    int nn; 
    printf("\nHow Many ELements You Want to Remove = ");
    scanf("%d", &nn);
    for( i=0; i < n-nn; i++){
        queue[i] = queue[i + nn];
    }
    n = n-nn;
}

void display (){
    for (i = 0 ;i < n ;i++){
       printf("Element %d is at position %d \n", queue[i], i+1);
    }
    getchar();
}

void  main()
{
    char choice;
    printf("1.First Input\n2.Add Element\n3.Remove\n4.Display\n5.Exit\nEnter Choice = ");
    do{
    switch (choice = getchar()) {
            case '1' : firstInput();
                       break;
            case '2' : add();
                       break;
            case '3' : removeElement();
                       break;
            case '4' : display();
                       break;
            case '5' : exit(0);
            default :  printf("Wrong entry");
        }
    }while(1);
}
