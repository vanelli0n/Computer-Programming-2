// Arithmetic
// Made by Juliana Jasmin D. Aliswag
// BSCS - 1D (STEM)
// April 7, 2021

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define ITEMS 3

void addition(int a, int b);
void subtraction(int a, int b);
void division(int a, int b);
void multiplication(int a, int b);
int menu();

int main(){
int i,a,b,c;
system("COLOR 0E");
while(1){
    srand(time(0));
    for(i=0;i<ITEMS;i++){
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
}

system("cls");
        switch(menu()){
        case 1:
        addition(a,b);
        break;
        case 2:
        subtraction(a,b);
        break;
        case 3:
        division(a,b);
        break;
        case 4:
        multiplication(a,b);
        break;
        case 5:
        exit(0);
        break;
        default:
        printf("\nInvalid input! Please try again.");
        break;
        getch();
    }
}

return 0;
}

void addition(int a, int b){
int c;
system("cls");
printf("\nWhat is %d + %d? ",a,b);
scanf("%d",&c);
if (c==a+b){
    printf("\nCorrect!");
    printf("\n\nInput any key to proceed.");
    getch();
   }
else {
    printf("\nIncorrect! The answer is %d.",a+b);
    printf("\n\nInput any key to proceed.");
    getch();
   }
}

void subtraction(int a, int b){
int c;
system("cls");
printf("\nWhat is %d - %d? ",a,b);
scanf("%d",&c);
if (c==a-b){
    printf("\nCorrect!");
    printf("\n\nInput any key to proceed.");
    getch();
   }
else {
    printf("\nIncorrect! The answer is %d.",a-b);
    printf("\n\nInput any key to proceed.");
    getch();
   }
}

void division(int a, int b){
int c;
float d;
system("cls");
printf("\nWhat is %d / %d? ",a,b);
scanf("%d",&c);
d=(float)a/b;
if (c==d){
    printf("\nCorrect!");
    printf("\n\nInput any key to proceed.");
    getch();
   }
else {
    printf("\nIncorrect! The answer is %f.",d);
    printf("\n\nInput any key to proceed.");
    getch();
   }
}

void multiplication(int a, int b){
int c;
system("cls");
printf("\nWhat is %d * %d? ",a,b);
scanf("%d",&c);
if (c==a*b){
    printf("\nCorrect!");
    printf("\n\nInput any key to proceed.");
    getch();
   }
else {
    printf("\nIncorrect! The answer is %d.",a*b);
    printf("\n\nInput any key to proceed.");
    getch();
   }
}

int menu(){
int op;

        printf("\n***********************************************************");
		printf("\n*                                                         *");
		printf("\n*           Welcome to Aliswag's Arithmetic!              *");
		printf("\n*                                                         *");
		printf("\n***********************************************************");

    printf("\n\n************************** MENU ***************************\n\n");

printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Division\n");
printf("4. Multiplication\n");
printf("5. Exit\n");
printf("\nPlease select from 1-5: ");
scanf("%d", &op);

printf("\n\nThank You for Trusting Aliswag's Services!\n\n");

return(op);
}
