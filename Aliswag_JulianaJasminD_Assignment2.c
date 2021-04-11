// Assignment #2
// Using Functions and Global Variables
// Made by Juliana Jasmin D. Aliswag
// BSCS - 1D (STEM)
// February 22, 2021

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define MAX 2

//Global Variables

int quiz1[MAX];
int quiz2[MAX];
int quiz3[MAX];
int i;
char name[MAX][20];

void getData();// populates the 2 arrays, returns nothing hence void type
float addNum(int a, int b, int c);// will add the 2 numbers in 2 arrays
void printResult();

int main( ){
    system("COLOR 0E");
    getData();
    printResult();
    getch();
    }

void getData(){
        printf("\n***********************************************************");
		printf("\n*                                                         *");
		printf("\n*           Welcome to Aliswag's Assignment #2!           *");
		printf("\n*                                                         *");
		printf("\n***********************************************************");

      printf("\n\n----------Please Enter Name and Quiz Scores Below----------");

for (i=0;i<MAX;i++) {

    printf("\n\nName: ");
    scanf("%s", name[i]);
    printf("Enter Quiz 1 Score: ");
    scanf("%d",&quiz1[i]);
    printf("Enter Quiz 2 Score: ");
    scanf("%d",&quiz2[i]);
    printf("Enter Quiz 3 Score: ");
    scanf("%d", &quiz3[i]);
  }
}

float addNum(int a, int b, int c){
   return((a+b+c)/3.0);
}

void printResult(){
system("cls");
    printf("\n***************************************** RESULTS *********************************************\n\n");
    printf("    Student No.\t\tQuiz 1\t\tQuiz 2\t\tQuiz 3\t\tAverage\t\tRemarks \n");
for (i=0;i<MAX;i++){
        printf("%d.) %s            %d           %d           %d        %6.2f      %s\n",i+1,name[i],quiz1[i],quiz2[i],quiz3[i],addNum(quiz1[i],quiz2[i],quiz3[i]), addNum(quiz1[i],quiz2[i],quiz3[i])>=75.0?"Passed":"Failed");
}
    printf("\n\nThank You for Trusting Aliswag's Services!\n");
}
