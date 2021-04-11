// Quiz #1
// Using Functions and Local Variables
// Made by Juliana Jasmin D. Aliswag
// BSCS - 1D (STEM)
// March 3, 2021

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 3
//Local Variables are declared inside the Functions
//Accessible only within the Function


void getData(char s[31],int *n1, int *n2, int *n3);//formal parameters are pointers to integers
float addNum(int a, int b, int c);
void display(char s[][31],int n1[], int n2[], int n3[]);//display in tabular form

int main(){

char n[MAX][31];
int num1[MAX];
int num2[MAX];
int num3[MAX];
int i;
system("COLOR 0E");

        printf("\n*****************************************************");
		printf("\n*                                                   *");
		printf("\n*           Welcome to Aliswag's Quiz #1!           *");
		printf("\n*                                                   *");
		printf("\n*****************************************************");

      printf("\n\n-------Please Enter Name and Quiz Scores Below--------");

for (i=0;i<MAX;i++){
    getData(n[i],&num1[i],&num2[i],&num3[i]);
  }
display(n,num1,num2,num3);//Arrays as actual parameters

return 0;
}
void getData(char s[31],int *n1, int *n2, int *n3){
    printf("\n\nInput Name: ");
    scanf(" %[^\n]s",s);
    printf("Input Quiz Score #1: ");
    scanf("%d",n1);
    printf("Input Quiz Score #2: ");
    scanf("%d",n2);
    printf("Input Quiz Score #3: ");
    scanf("%d",n3);
    printf("\n");
    getchar();
}

float addNum(int a, int b, int c){
    return((a+b+c)/3.0);
}

void display(char s[][31],int n1[], int n2[], int n3[]){
int i;
system("cls");
printf("\n********************************************** RESULTS ***********************************************\n");
printf("\n   Name\t\tQuiz 1\t\tQuiz 2\t\tQuiz 3\t\tAverage\t\tRemarks\n");
for(i=0;i<MAX;i++)
    printf("%d.) %s\t\t%d\t\t%d\t\t%d\t\t%6.2f\t\t%s\n",i+1,s[i],n1[i],n2[i],n3[i],addNum(n1[i],n2[i],n3[i]), addNum(n1[i],n2[i],n3[i])>=75.0?"Passed":"Failed");

    printf("\n\nThank You for Trusting Aliswag's Services!\n");
}
