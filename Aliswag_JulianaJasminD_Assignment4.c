// Assignment #4
// Array of Structure Example Using Global Variables
// Made by Juliana Jasmin D. Aliswag
// BSCS - 1D (STEM)
// March 10, 2021

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 2

typedef struct quizscores{
   char name[31];
   int r;
   int m;
   int c;
}QS;
QS Quiz[MAX];//Array Of Structure Declared As Global
void getRec();
float ave(int r, int m, int c);
void display();

int main(){
getRec();
display();
system("COLOR 0E");
return 0;
}

void getRec(){

        printf("\n***********************************************************");
		printf("\n*                                                         *");
		printf("\n*           Welcome to Aliswag's Assignment #4!           *");
		printf("\n*                                                         *");
		printf("\n***********************************************************");

      printf("\n\n----------Please Enter Name and Quiz Scores Below----------");

    int i;
    for (i=0;i<MAX;i++){
    printf("\n\nInput name: ");
    scanf(" %[^\n]s",Quiz[i].name);
    printf("Input Score: ");
    scanf("%d",&Quiz[i].r);
    printf("Input Score: ");
    scanf("%d",&Quiz[i].m);
    printf("Input Score: ");
    scanf("%d",&Quiz[i].c);
    }
}

void display(){
int i;
float av;
system("cls");
    printf("\n***************************************** RESULTS *********************************************\n\n");
    printf("    Student No.\t\tQuiz 1\t\tQuiz 2\t\tQuiz 3\t\tAverage\t\tRemarks \n");
for (i=0;i<MAX;i++){
    av = ave(Quiz[i].r,Quiz[i].m,Quiz[i].c);

    printf("%d.)  %s\t\t%d\t\t%d\t\t%d\t\t%6.2f\t\t%s\n",i+1,Quiz[i].name,Quiz[i].r,Quiz[i].m,Quiz[i].c,av,av>75.0? "PASSED":"FAILED");
}
}
float ave(int r, int m, int c){
  return ((float)(r+m+c)/3.0);

    printf("\n\nThank You for Trusting Aliswag's Services!\n");
}
