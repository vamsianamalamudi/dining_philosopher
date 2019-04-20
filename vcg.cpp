#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void help();
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
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
	//getch();
	goto mainhome;
	}
	else if (choice=='R')
	{
	//reset_score();
	//getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
    // gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    }
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

