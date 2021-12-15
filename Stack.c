#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int n, i, stack[20];


void firstInput(){
    printf("Enter Number Of Element = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &stack[i]);
    }
}

void addElement(){
    int nn;
    printf("How Many Elements Do You Want To Add = ");
    scanf("%d", &nn);
    for(i = n ;i < n + nn;i++){
        scanf("%d", &stack[i]);
    }
    n = n + nn;
}

void removeElement(){
    int nn;
    printf("Enter No of Elements To Remove = ");
    scanf("%d", &nn);
    n = n -nn;
}
void display(){
    for(i = 0; i < n; i++){
        printf("Element %d At Position %d\n", stack[i], i+1);
    }
    getch();
}
void main()
{
    char choice;
    printf("\n1.First Input\n2.Add Element\n3.Remove Element\n4.Display\n5.Exit\nEnter Choice ");
    do{
        switch(choice = getchar()){
            case '1' : firstInput();
                       break; 
            case '2' : addElement();
                       break;
            case '3' : removeElement();
                       break;
            case '4' : display();
                       break;            
            case '5' :  exit(0);
            default : printf("Wrong Entry");
        }
    }while(1);
}
