// Quiz 3
// Made by Juliana Jasmin D. Aliswag
// BSCS - 1D (STEM)
// April 14, 2021

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define ITEMS 5

void addition();
void subtraction();
void division();
void multiplication();
void display();
int menu();

char n[31];
int correct[4]={0,0,0,0};
float grade[4]={0,0,0,0};
int i,a,b,c;

int main(){
system("COLOR 0E");

        printf("\n***********************************************************");
		printf("\n*                                                         *");
		printf("\n*           Welcome to Aliswag's Quiz #3!                 *");
		printf("\n*                                                         *");
		printf("\n***********************************************************");

printf("\n\nInput name: ");
scanf(" %[^\n]s", &n);
while(1){
        system("cls");
        switch(menu()){
        case 1:
        addition();
        break;
        case 2:
        subtraction();
        break;
        case 3:
        division();
        break;
        case 4:
        multiplication();
        break;
        case 5:
        display();
        case 6:
        exit(0);
        break;
        default:
        printf("Invalid input! Please try again.\n");
        break;
        getch();
    }
}
}

void addition(){
system("cls");
printf("\n****** Addition ******\n");
for(i=1; i<ITEMS+1; i++){
    srand(time(0));
    a = rand() % 20 + 1;
    b = rand() % 20 + 1;
    printf("\n%d.) What is %d + %d? ",i,a,b);
    scanf("%d",&c);
    if (c==a+b){
        printf("\nCorrect!");
        correct[1]++;
        printf("\n\nInput any key to proceed.\n");
        getch();
       }
    else {
        printf("\nIncorrect! The answer is %d.",a+b);
        printf("\n\nInput any key to proceed.\n");
        getch();
       }
    }
grade[1] =((correct[1]*100)/ITEMS);
printf("\n\nYou got %d correct answers out of %d items for a grade of %6.2f.", correct[1], ITEMS, grade[1]);
printf("\n\nInput any key to return to the menu.");
getch();
}

void subtraction(){
system("cls");
printf("\n****** Subtraction ******\n");
for(i=1; i<ITEMS+1; i++){
    do{
      srand(time(0));
      a = rand() % 20 + 1;
      b = rand() % 20 + 1;
    }while(a<b);
    printf("\n%d.) What is %d - %d? ",i,a,b);
    scanf("%d",&c);
    if (c==a-b){
        printf("\nCorrect!");
        correct[2]++;
        printf("\n\nInput any key to proceed.\n");
        getch();
       }
    else {
        printf("\nIncorrect! The answer is %d.",a-b);
        printf("\n\nInput any key to proceed.\n");
        getch();
       }
    }
grade[2] =((correct[2]*100)/ITEMS);
printf("\n\nYou got %d correct answers out of %d items for a grade of %6.2f.", correct[2], ITEMS, grade[2]);
printf("\n\nInput any key to return to the menu.");
getch();
}

void division(){
system("cls");
printf("\n****** Division ******\n");
for(i=1; i<ITEMS+1; i++){
    do{
      srand(time(0));
      a = rand() % 20 + 1;
      b = rand() % 20 + 1;
    }while(a<b, a%b!=0);
    printf("\n%d.) What is %d / %d? ",i,a,b);
    scanf("%d",&c);
    if (c==a/b){
        printf("\nCorrect!");
        correct[3]++;
        printf("\n\nInput any key to proceed.\n");
        getch();
       }
    else {
        printf("\nIncorrect! The answer is %d.",a/b);
        printf("\n\nInput any key to proceed.\n");
        getch();
       }
    }
grade[3] =((correct[3]*100)/ITEMS);
printf("\n\nYou got %d correct answers out of %d items for a grade of %6.2f", correct[3], ITEMS, grade[3]);
printf("\n\nInput any key to return to the menu.");
getch();
}

void multiplication(){
int c;
system("cls");
printf("\n****** Multiplication ******\n");
for(i=1; i<ITEMS+1; i++){
    srand(time(0));
    a = rand() % 20 + 1;
    b = rand() % 20 + 1;
    printf("\n%d.) What is %d * %d? ",i,a,b);
    scanf("%d",&c);
    if (c==a*b){
        printf("\nCorrect!");
        correct[4]++;
        printf("\n\nInput any key to proceed.\n");
        getch();
       }
    else {
        printf("\nIncorrect! The answer is %d.",a*b);
        printf("\n\nInput any key to proceed.\n");
        getch();
       }
    }
grade[4] =((correct[4]*100)/ITEMS);
printf("\n\nYou got %d correct answers out of %d items for a grade of %6.2f", correct[4], ITEMS, grade[4]);
printf("\n\nInput any key to return to the menu.");
getch();
}

void display(){
float fin;
system("cls");
fin=((grade[1]+grade[2]+grade[3]+grade[4])/4);

printf("\n***************************************** RESULTS *********************************************\n\n");
printf("    Name\tAddition\tSubtraction\tDivision\tMultiplication\t  Final Average\n");
printf("\n%d.) %s \t%6.2f\t\t%6.2f\t\t%6.2f\t\t%6.2f\t\t  %6.2f", 1, n, grade[1], grade[2], grade[3], grade[4], fin);

printf("\n\n\nThank You for Trusting Aliswag's Services!\n");

printf("\n\nInput any key to exit this program.");
}

int menu(){
int op;

printf("\n\n************************** MENU ***************************\n\n");

printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Division\n");
printf("4. Multiplication\n");
printf("5. Results\n");
printf("6. Exit\n");
printf("\nPlease select from 1-6: ");
scanf("%d", &op);
return(op);
}
