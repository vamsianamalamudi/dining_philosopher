#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void help();
void reset_n();
int main()
     {
     int countr,r,r1,count,i,nof;
     float score;
     char choice;
     mainhome:
     system("clear");
     printf("\tC PROGRAM TO SOLVE DINING PHILOSOPHER PROBLEM\n");
     printf("\n\t______________________________________________");
	printf("\n\t______________________________________________");
     printf("\n\t\t\t   By ");
     printf("\n\t\t\t  Using");
     printf("\n\t\t\t MONITORS ");
	printf("\n\t______________________________________________");
	printf("\n\t______________________________________________");    
	printf("\n\t\t > Press S to start ");
     printf("\n\t\t > Press R to reset number of philosopher            ");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
	printf("\n\t______________________________________________\n\n");
	
     choice= toupper(getchar());
      if (choice=='H')
	{
	help();
	getchar();
	goto mainhome;
	}
	else if (choice=='R')
	{
	reset_n();
	getchar();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("clear");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter number of philosophers:");
	scanf("%d", &nof);
	printf("\n\n\n\n\n\t\t\tNumber entered: %d", nof );
   system("clear");
	printf("\n\n\t*********************CHECK OUT THE SOLUTION*****************************");
    printf("\n\n\n Press Y  to start !\n");
    printf("\n Press any other key to return to the main menu!");
////////////////////not working
	char s = getchar();
	if(s = 'y' || 'Y')
		printf("\n\n\n ANIMATION STARTSSSSSSSSSSSSS !\n");
	else 
		goto mainhome;
    }
}

void reset_n()
{
	printf("\n\n\n CODE TO RESET NO OF PHILOSOPHERS !\n");
	 printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter number of philosophers:");
	scanf("%d", &nof);
	printf("\n\n\n\n\n\t\t\tNumber entered: %d", nof );
   system("clear");
	printf("\n\n\t*********************CHECK OUT THE SOLUTION*****************************");
    printf("\n\n\n Press Y  to start !\n");
    printf("\n Press any other key to return to the main menu!");
////////////////////not working
	char s = getchar();
	if(s = 'y' || 'Y')
		printf("\n\n\n ANIMATION STARTSSSSSSSSSSSSS !\n");
	else 
		goto mainhome;

}

void help()
	{
	system("clear");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n .............. C PROGRAM TO SOLVE DINING PHILOSOPHER PROBLEM...........");
    printf("\n >> There are two methonds to solve this problem, using semaphore & using monitors");
    printf("\n >> Using semaphore you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************CHECK OUT THE SOLUTION*********************************");
	printf("\n\n\t*****C PROGRAM TO SOLVE DINING PHILOSOPHER PROBLEM is developed by SHARAN & VAMSI********");}

