// Quiz #2
// File Handling
// Made by Juliana Jasmin D. Aliswag
// BSCS - 1D (STEM)
// March 24, 2021

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 100

char name[MAX][31];
int q1[MAX];
int q2[MAX];
int q3[MAX];
int last;
int menu();
char fn[31];
void initialize();
int isfull();
int isempty();
void insert(char n[31], int a, int b, int c);
void del(char n[31]);
int locate(char n[31]);
float ave(int a, int b, int c);
void display();
void save(char fn[]);
void retrieve(char fn[]);
void update(char n[31]);


int main() {
    char ndata[31];
    int data1;
    int data2;
    int data3;
    system("COLOR 0E");

        printf("\n*****************************************************");
		printf("\n*                                                   *");
		printf("\n*           Welcome to Aliswag's Quiz #2!           *");
		printf("\n*                                                   *");
		printf("\n*****************************************************");

      printf("\n\n--- Please Enter File Name and Student Data Below ---");

    initialize();
     printf("\n\nInput file name: ");
    scanf("%s", fn);
    retrieve(fn);
    while(1) {
        switch(menu()) {

        case 1 : system("cls");
        printf("\nInsert Mode\n");
        printf("\nInput Student Name: ");
        scanf(" %[^\n]s", ndata);
        printf("Input Quiz 1 Score: ");
        scanf("%d", &data1);
        printf("Input Quiz 2 Score: ");
        scanf("%d", &data2);
        printf("Input Quiz 3 Score: ");
        scanf("%d", &data3);
        insert(ndata, data1, data2, data3);
        break;

        case 2 : system("cls");
        printf("Delete Mode\n");
        printf("\nInput name: ");
        scanf(" %[^\n]s", ndata);
        del(ndata);
        break;

        case 3: system("cls");
                printf("\nUpdate Mode\n");
                printf("\nInput name: ");
                scanf(" %[^\n]s", ndata);
                update(ndata);
                break;

        case 4: display();
        break;

        case 5: save(fn);
                exit(0);
        break;

        default: printf("INVALID");
        break;
        getch();

        }

}

}

void initialize() {
        last = -1;
}

void save(char fn[]){
    FILE *fp;
    int i;
    fp = fopen(fn, "w+");
        if (fp==NULL){
            printf("\nFILE ERROR");
            getch();
            }
        else{
            for(int i=0;i<=last;i++)
            {
             fprintf(fp, "%s\n", name[i]);
             fprintf(fp,"%i\n",q1[i]);
             fprintf(fp,"%i\n",q2[i]);
             fprintf(fp,"%i\n",q3[i]);
            }
        }
    fclose(fp);
}


void retrieve(char fn[])
{
    FILE *fp;
    char nada[31];
    int a,b,c;
    fp = fopen(fn, "r+");
    if (fp == NULL)
    {
        printf("\nPROCESSING...");
        printf("\nPlease press any button to continue.");
        getch();
    }
    else
    {
        while(!feof(fp))
        {
            fscanf(fp, "%[^\n]\n", nada);
            fscanf(fp,"%i\n",&a);
            fscanf(fp,"%i\n",&b);
            fscanf(fp,"%i\n",&c);
            insert(nada,a,b,c);
        }
    }
    fclose(fp);
}


int isfull() {
        return (last == MAX-1);
}

int isempty() {
        return(last==-1);
}

void insert(char n[31], int a, int b, int c) {

    if(isfull()){
        printf("\nArray is full.");
        system("pause");
    }
    else {
        last++;
        strcpy(name[last], n);
        q1[last] = a;
        q2[last] = b;
        q3[last] = c;

    }

}

void del(char n[31]) {

    int i, p;
        if (isempty()){
            printf("\nArray is empty.");
            system("pause");
        }
        else {
            p = locate(n);
            if(p<0){
                printf("\nNot found.");
                getch();
            }
            else {
            for(i=p;i<last;i++) {

                strcpy(name[i], name[i+1]);
                q1[i] = q1[i+1];
                q2[i] = q2[i+1];
                q3[i] = q3[i+1];


            }
                last --;
                printf("\nDelete operation success!");
                getch();
            }

}

}

int locate(char n[31]) {
        for(int i=0;i<=last;i++) {

        if(strcmp(name[i], n)==0)
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
    printf("\n********************************************** RESULTS ***********************************************\n");
   	printf("    Name \tQuiz 1   Quiz 2  Quiz 3   \tAverage \tRemarks\n");
	for (i=0; i<=last; i++)
        printf("%d.) %s \t %d \t %d \t %d \t\t%.2lf \t\t%s \n", i+1, name[i], q1[i],q2[i],q3[i], ave(q1[i],q2[i],q3[i]),ave(q1[i],q2[i],q3[i])>= 75.0? "PASSED":"FAILED");
        system("pause");

            printf("\n\nThank You for Trusting Aliswag's Services!\n");
}


int menu() {
int op;
system("cls");
printf("\n\n************************** MENU ***************************\n\n");
printf("1.Insert Element\n");
printf("2.Delete Element\n");
printf("3.Update\n");
printf("4.Display All\n");
printf("5.Exit\n");
printf("\nPlease select from 1-5: ");
scanf("%d", &op);
return(op);
}

void update(char s[31])
{
int p,i;
int QUIZ;
        p = locate(s);
            if(p<0){
                printf("\nNot found.");
                getch();
            }
            else
                {
                printf("\nName: %s\n", name[p]);
                printf("Quiz 1: %d\n",q1[p]);
                printf("Quiz 2: %d\n",q2[p]);
                printf("Quiz 3: %d\n",q3[p]);
                printf("Select Quiz Number (1-3): ");
                scanf("%d", &QUIZ);
                    switch(QUIZ)
                    {
                        case 1: printf("\nInput Quiz 1: ");
                               scanf("%d", &q1[p]);
                               system("cls");
                               printf("New Quiz 1 Score: %d\n", q1[p]);
                               system("pause");
                               break;
                         case 2: printf("Input Quiz 2: ");
                               scanf("%d", &q2[p]);
                               system("cls");
                               printf("New Quiz 2 Score:: %d\n", q2[p]);
                               system("pause");
                                break;
                         case 3: printf("Input Quiz 3: ");
                                scanf("%d",&q3[p]);
                                system("cls");
                               printf("New Quiz 3 Score: %d\n", q3[p]);
                               system("pause");
                                break;
                        default:printf("\nInvalid");
                        break;
                        getch();
                    }
  }

}
