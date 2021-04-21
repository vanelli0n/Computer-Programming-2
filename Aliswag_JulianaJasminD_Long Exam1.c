// Long Exam #1
// Made by Juliana Jasmin D. Aliswag
// BSCS - 1D (STEM)
// April 21, 2021

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>

typedef struct rec {
       int empid;
       char name[31];
       char department[31];
       float netpay;
} record;

record emp[3];

int select,temp,total = 0,order[3]={0,1,2}, ord[3]= {0,0,0},tump,timp;
char alp[53][53] = {"A","a","B","b","C","c","D","d","E","e","F","f","G","g","H","h","I","i","J","j","K","k","L","l","M","m","N","n","O","o","P","p","Q","q","R","r","S","s","T","t","U","u","V","v","W","w","X","x","Y","y","Z","z",};
char tamp[31];

void getrecord(){
    system("cls");
    printf("EmpId\t/Name\t/Department\t/Netpay\n");
    for(int i = 0; i < 3; ++i){
    printf("%d\t/", emp[i].empid);
    printf("%s\t/", emp[i].name);
    printf("%s\t/", emp[i].department);
    printf("%6.2f\n", emp[i].netpay);
    printf("\n\nThank You for Trusting Aliswag's Services!\n\n");
    printf("\nInput any key to Return to Menu\n");
    }
}

void insert(){
    if (total == 3){
        printf("Total Number of Employees Reached!");
        return 0;
    }
    system("cls");
     printf("\nInput the Employee Number: ");
     scanf("%d", &temp);
     for (int i = 0; i < 3; ++i){
        if (temp == emp[i].empid){
            printf("\nERROR! Employee Number Already Registered!");
            getch();
            return 0;
        }
     }
     emp[total].empid = temp;
     printf("\nInput your Name: ");
     scanf(" %[^\n]%*c",&emp[total].name);
     printf("Input your Department: ");
     scanf(" %[^\n]%*c",&emp[total].department);
     printf("Input your Netpay: ");
     scanf("%f",&emp[total].netpay);
     printf("You have registered successfully!");
     printf("\n\nThank You for Trusting Aliswag's Services!\n\n");
     printf("\nInput any key to Return to Menu\n");
     total++;
}

void insertsort(){
    if (total != 3){
        system("cls");
    printf("\nInput the Employee Number: ");
     scanf("%d", &temp);
     for (int i = 0; i < 3; ++i){
        if (temp == emp[i].empid){
            printf("\nERROR! Employee Number Already Registered!");
            getch();
            return 0;
        }
     }
     emp[total].empid = temp;
     printf("\nInput your Name: ");
     scanf(" %[^\n]%*c",&emp[total].name);
     printf("Input your Department: ");
     scanf(" %[^\n]%*c",&emp[total].department);
     printf("Input your Netpay: ");
     scanf("%f",&emp[total].netpay);
     printf("You have registered successfully!");
     printf("\n\nThank You for Trusting Aliswag's Services!\n\n");
     total++;
    }
     for(int j = 0; j < 3; ++j){
        strncpy(&tamp, &emp[j].name, 1);
     for(int i = 0; i < 53; ++i){
       if(strcmp(tamp, alp[i]) == 0){
            ord[j] = i;
       }
     }
     }
     for(int i = 0; i < 2; ++i){
        if(ord[order[i]] > ord[order[i + 1]]){
            temp = order[i];
            order[i] = order [i+1];
            order[i+1]= temp;
            i = -1;
        }
     }
   printf("\nEmpId\t/Name\t/Department\t/Netpay\n");
    for(int i = 0; i < 3; ++i){
    printf("%d\t/", emp[order[i]].empid);
    printf("%s\t/", emp[order[i]].name);
    printf("%s\t/", emp[order[i]].department);
    printf("%6.2f\t\n", emp[order[i]].netpay);
    printf("\n\nThank You for Trusting Aliswag's Services!\n\n");
    }
    getch();
}

void update(){
    system("cls");
    printf("\nInput the New Employee Number: ");
    scanf("%d", &temp);
    for (int i = 0; i < 3; ++i){
        if (temp == emp[i].empid){
            printf("1 - Name\n");
            printf("2 - Department\n");
            printf("3 - Netpay\n");
            printf("Input Any Other Number to Cancel");
            printf("Input what to Edit: ");
            scanf("%d", &timp);
            switch(timp){
            case 1:
            printf("Input New Value: ");
            scanf(" %[^\n]%*c",&emp[i].name);
            break;
            case 2:
                printf("Input New Value: ");
            scanf(" %[^\n]%*c",&emp[i].department);
                break;
            case 3:
                printf("Input New Value: ");
            scanf("%f",&emp[i].netpay);
                break;
            printf("\n\nThank You for Trusting Aliswag's Services!\n\n");
            }
            return 0;
        }
     }
}
void guessing(){
    system("cls");
    int num, guess, tries = 0;
    srand(time(0));
    num = rand() % 19 + 1;
    do
    {
        printf("\n\n******************* Guess the Mystery Number! ********************\n\n", num);


        printf("Input a Guess between 1 and 20: ");

        scanf("%d", &guess);
        tries++;

         if (guess > num)
        {
            printf("\nLower!\n\n");
        }
        else if (guess < num)
        {
            printf("\nHigher!\n\n");
        }
        else
        {
            printf("\nCongratulations! You guessed it in %d attempts!\n", tries);
        }

    }while (guess != num);
}

void luckpick42(){
system("cls");
int a[7];

printf("\n\n**************** Generated 6/42 Lotto Number Combination: *****************\n\n");

srand(time(0));
for(int i=1; i<7; i++){
    a[i] = rand() % 41 + 1;
    for(int j = 0; j < i; ++j){
        if(a[i] == a[j])
            i--;
    }
}
for(int i=1; i<6; i++)
    printf("%d-",a[i]);
    printf("%d",a[6]);
}

int main(){
system("COLOR 0E");

do{
system("cls");

        printf("\n****************************************************************");
		printf("\n*                                                              *");
		printf("\n*           Welcome to Aliswag's Long Exam #1!                 *");
		printf("\n*                                                              *");
		printf("\n****************************************************************");

printf("\n\n************************** MENU ***************************\n\n");

printf("1. Records - getrecord()\n");
printf("2. Insert - insert()\n");
printf("3. Sort - insertsort()\n");
printf("4. Update - update()\n");
printf("5. Mystery Number - guessing()\n");
printf("6. 6/42 Lotto - luckpick42()\n");
printf("7. Exit the Program\n");
printf("\nPlease select from 1-7: ");
scanf("%d", &select);

switch (select){
    case 1:
        getrecord();
        getch();
        break;
    case 2:
        insert();
        getch();
        break;
    case 3:
        insertsort();
        getch();
        break;
    case 4:
        update();
        getch();
        break;
    case 5:
        guessing();
        getch();
        break;
    case 6:
        luckpick42();
        getch();
        break;
    }
    }while (select != 7);
}
