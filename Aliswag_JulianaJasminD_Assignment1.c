// Assignment #1
// Made by Juliana Jasmin D. Aliswag
// BSCS - 1C (STEM)
// February 17, 2021

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>


struct detail {
                char name[20];
                int quiz1[2];
                int quiz2[2];
                int quiz3[2];
                float average[2];
                char remarks[20];
               };

int main( )
{
        system("COLOR 0E");
        int i,n;
        int quiz1[2];
        int quiz2[2];
        int quiz3[2];

		printf("\n***********************************************************");
		printf("\n*                                                         *");
		printf("\n*           Welcome to Aliswag's Assignment #1!           *");
		printf("\n*                                                         *");
		printf("\n***********************************************************");

        printf("\n\nPlease enter how many records you want to store: ");
        scanf("%d",&n);
        struct detail ye[n];
        struct detail avg[n];
        struct detail rms[n];

      printf("\n\n----------Please Enter Name and Quiz Scores Below----------");




        for(int i = 0; i<n; i++) {

                printf("\n\nEnter %d record: \n\n",i+1);

                printf("Enter Name: ");
                scanf("%s",ye[i].name);
                printf("Enter Quiz 1 Score: ");
                scanf("%d",&ye[i].quiz1[2]);
                printf("Enter Quiz 2 Score: ");
                scanf("%d",&ye[i].quiz2[2]);
                printf("Enter Quiz 3 Score: ");
                scanf("%d",&ye[i].quiz3[2]);
                avg[i].average[2] =(ye[i].quiz1[2]+ye[i].quiz2[2]+ye[i].quiz3[2])/3.0;
}

        printf("\t\nName\tQuiz 1\tQuiz 2\tQuiz 3\tAverage\tRemarks\n");

        for(int i = 0; i<n; i++) {

                    if(avg[i].average[2] >= 75.0)
                        strcpy (rms[i].remarks, "PASSED");
                    else
                        strcpy (rms[i].remarks, "FAILED");

                    printf("%s\t%d\t%d\t%d\t%6.2f\t%s\t\n", ye[i].name, ye[i].quiz1[2], ye[i].quiz2[2], ye[i].quiz3[2], avg[i].average[2], rms[i].remarks);

       }
       {
        printf("\nThank You for Trusting Aliswag's Services!\n");
       }

        return 0;

}
