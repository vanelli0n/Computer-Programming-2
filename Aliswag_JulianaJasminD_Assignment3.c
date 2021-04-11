// Assignment #3
// Array of Structure Example Using Local Variables
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

void getRec(QS qs[]);
float ave(int r, int m, int c);
void display(QS qs[]);

int main(){
QS Quiz[MAX];//Array Of Structure
getRec(Quiz);
display(Quiz);
system("COLOR 0E");

return 0;
}
void getRec(QS qs[]){

        printf("\n***********************************************************");
		printf("\n*                                                         *");
		printf("\n*           Welcome to Aliswag's Assignment #3!           *");
		printf("\n*                                                         *");
		printf("\n***********************************************************");

      printf("\n\n----------Please Enter Name and Quiz Scores Below----------");

    int i;
    for (i=0;i<MAX;i++){
    printf("\n\nInput name: ");
    scanf(" %[^\n]s",qs[i].name);
    printf("Input Score: ");
    scanf("%d",&qs[i].r);
    printf("Input Score: ");
    scanf("%d",&qs[i].m);
    printf("Input score: ");
    scanf("%d",&qs[i].c);
    printf("\n");
    }
}

void display(QS qs[]){
int i;
system("cls");
    printf("\n***************************************** RESULTS *********************************************\n\n");
    printf("    Student No.\t\tQuiz 1\t\tQuiz 2\t\tQuiz 3\t\tAverage\t\tRemarks \n");
for (i=0;i<MAX;i++)
    printf("%d.)  %s\t\t%d\t\t%d\t\t%d\t\t%6.2f\t\t%s\n",i+1,qs[i].name,qs[i].r,qs[i].m,qs[i].c,ave(qs[i].r,qs[i].m,qs[i].c),(ave(qs[i].r,qs[i].m,qs[i].c)>=75.0? "PASSED":"FAILED"));

}
float ave(int r, int m, int c){
  return ((float)(r+m+c)/3.0);

  printf("\n\nThank You for Trusting Aliswag's Services!\n");
}
