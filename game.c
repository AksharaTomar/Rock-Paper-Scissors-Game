//create Rock,Paper & Scissors Game
//player 1:Rock
//player 2:(computer):scissors-->player 1 gets 1 point
//rock vs scissors -- rock wins
//paper vs scissors-- scissors wins
//paper vs rock-- paper wins
//wite a C program to allow user to play this game three times with computer.Log the score of computer and the player. display the name of the winner at the end.
//notes: You have to display name of the player during the game. Take users name as a input from the user.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int generaterandomnumber(int n){
	srand(time(NULL));
	return rand()%n;
}
int greater(char char1,char char2)
{
	if(char1==char2)
	{
		return -1;
	}
	else if((char1=='r')&&(char2=='s'))
	{
		return 1;
	}
	else if((char2=='r')&&(char1=='s'))
	{
		return 0;
	}
	else if((char1=='p')&&(char2=='r'))
	{
		return 1;
	}
	else if((char2=='p')&&(char1=='r'))
	{
	    return 0;	
	}
	else if((char1=='s')&&(char2=='p'))
	{
		return 1;
	}
	else if((char2=='s')&&(char1=='p'))
	{
		return 0;
	}
}
int main()
{
	printf("%d\n",greater('s','p'));
	int playerscore=0, compscore=0,temp,i;
	char playerchar,compchar;
	char dict[]={'r','p','s'};
	printf("welcome to the rock,paper,scissors\n");
	printf("choose 1 for rock,2 for paper and 3 for scissors\n");
	for(i=0;i<3;i++)
	{
//		take player 1's input
		printf("player 1's turn:\n");
		printf("choose 1 for Rock,2 for paper and 3 for scissors\n");
		scanf("%d",&temp);
		getchar();
		playerchar=dict[temp-1];
		printf("you choose %c\n\n",playerchar);
//		generate computers input
		printf("computer's' turn:\n");
		printf("choose 1 for Rock,2 for paper and 3 for scissors\n");
		temp=generaterandomnumber(3)+1;
		getchar();
		compchar=dict[temp-1];
		printf("Cpu choose %c\n",compchar);
//		compare the scores
		if(greater(compchar,playerchar)==1)
		{
			compscore+=1;
			printf("Cpu Got it!\n");
		}
		else if(greater(compchar,playerchar)==-1)
		{
			compscore+=1;
			playerscore+=1;
			printf("its a draw!\n");
		}
		else{
			playerscore+=1;
			printf("You Got it!\n");
		}
		printf("you: %d\n Cpu:%d\n\n",playerscore,compscore);
	}
	if(playerscore>compscore)
	{
	printf("you win the game\n");	
	}
	else if(playerscore>compscore)
	{
		printf("Cpu win the game\n");
	}
	else{
		printf("its a draw\n");
	}
	return 0;
}