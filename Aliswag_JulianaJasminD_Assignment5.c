// Assignment #5
// Advanced Array Manipulation
// Made by Juliana Jasmin D. Aliswag
// BSCS - 1D (STEM)
// March 17, 2021

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 5

char sn[MAX][31];
int quiz1[MAX];
int quiz2[MAX];
int quiz3[MAX];
int last;
int menu();

void initialize();
int isfull();
int isempty();
void insert(char s[31], int a, int b, int c);
void del(char s[31]);
int locate(char s[31]);
float ave(int a, int b, int c);
void display();


int main() {
    char sndata[31];
    int data1;
    int data2;
    int data3;
    initialize();
    system("COLOR 0E");

    while(1) {
        switch(menu()) {

        case 1 : system("cls");
        printf("\n---------- Please Enter Name and Quiz Scores Below ----------\n\n");
        printf("Please Insert Student Information\n\n");
        printf("Input Student Name: ");
        scanf(" %[^\n]s", sndata);
        printf("Input Quiz 1 Score: ");
        scanf("%d", &data1);
        printf("Input Quiz 2 Score: ");
        scanf("%d", &data2);
        printf("Input Quiz 3 Score: ");
        scanf("%d", &data3);
        insert(sndata, data1, data2, data3);
        break;

        case 2 : system("cls");
        printf("Delete Student Information\n");
        printf("Input Student Name: ");
        scanf(" %[^\n]s", sndata);
        del(sndata);
        break;

        case 3: display();
        break;

        case 4: exit(0);
        break;

        default: printf("Please select from 1-4 only");
        getch();
        }
    }
}

void initialize() {
        last = -1;
}

int isfull() {
        return (last == MAX-1);
}

int isempty() {
        return(last==-1);
}

void insert(char s[31], int a, int b, int c) {

        if(isfull()){
        printf("Array is full.");
        system("pause");
        }
        else {
        last++;
        strcpy(sn[last], s);
        quiz1[last] = a;
        quiz2[last] = b;
        quiz3[last] = c;

    }
}

void del(char s[31]) {

        int i, p;
            if (isempty()){
            printf("Array is empty.");
            system("pause");
        }
            else {
            p = locate(s);
            if(p<0){
                printf("ERROR! Not found.");
                getch();
            }
            else {
            for(i=p;i<last;i++) {

                strcpy(sn[i], sn[i+1]);
                quiz1[i] = quiz1[i+1];
                quiz2[i] = quiz2[i+1];
                quiz3[i] = quiz3[i+1];
            }
                last --;
                printf("Delete operation successful!");
                getch();
            }
    }
}

int locate(char s[31]) {
            for(int i=0;i<=last;i++) {

            if(strcmp(sn[i],s)==0)
                return i;
            }
        return -1;
}

float ave(int a, int b, int c) {
            return((a+b+c)/3.0);
}

void display() {

    int i;
    system("cls");
    printf("\n***************************************** RESULTS *********************************************\n\n");
    printf("    NAME\t\tQUIZ 1\t\tQUIZ 2\t\tQUIZ 3\t\tAVERAGE\t\tREMARKS \n");
    for (i=0; i<=last; i++)
        printf("%d.)    %s\t\t%d\t\t%d\t\t%d\t\t%6.2f\t\t%s\n", i+1, sn[i], quiz1[i],quiz2[i],quiz3[i], ave(quiz1[i],quiz2[i],quiz3[i]), ave(quiz1[i],quiz2[i],quiz3[i])>=75.0?"Passed":"Failed");
        printf("\n\nThank You for Trusting Aliswag's Services!\n\n");

        system("pause");
}


int menu() {
    int noice;
    system("cls");

        printf("\n***********************************************************");
		printf("\n*                                                         *");
		printf("\n*           Welcome to Aliswag's Assignment #5!           *");
		printf("\n*                                                         *");
		printf("\n***********************************************************");

    printf("\n\n************************** MENU ***************************\n\n");
    printf("1. Insert Student Information\n");
    printf("2. Delete Student Information\n");
    printf("3. Display All Information\n");
    printf("4. Exit\n");
    printf("\nPlease select from 1-4: ");
    scanf("%d", &noice);
    return(noice);
}
