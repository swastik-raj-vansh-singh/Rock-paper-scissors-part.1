//17/01/22 02:09
//rock paper seasor game!!!he he he 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int game(char you,char comp)
{
	if(you==comp)
	{
		return 0;
	}	
	else if((you=='p' && comp=='r')||(you=='s' && comp=='p') || (you=='r' && comp=='s'))
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char you,comp,y,p,r,s;
	srand(time(0));
	int number=rand()%100+1;
	if(number<37){
		comp='r';
	}
	else if(number<78){
		comp='p';
	}
	else{
		comp='s';
	}

	//printf("%d",number);
	
	printf("WELCOME TO THE ROCK PAPER SEASORS GAME!!!!\n");
	printf("Enter r for rock \nEnter p for paper \nEnter s for seasors\n");
	printf("Enter the character you want to chose :\n");
	scanf("%c",&you);
	
	int result=game(you,comp);
	if (result==0)
	{
	    printf("MATCH DRAW!!\n");	
	}
	else if (result==1)
	{
		printf("UHUU YOU WON!!!\n");
	}
	else
	{
		printf("OOPS YOU LOSE THIS TIME!!!\n");
	}
	
   
	printf("you chose %c and computer chose %c \n",you,comp);
	printf("THANKYOU FOR PLAYING THE GAME!!!\n");

}
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char you,comp;
	srand(time(0));
	int number=rand()%100+1;
	if(number<37){
		comp='r';
	}
	else if(number<78){
		comp='p';
	}
	else{
		comp='s';
	}

	//printf("%d",number);
	
	printf("WELCOME TO THE ROCK PAPER SEASORS GAME!!!!\n");
	printf("Enter r for rock \nEnter p for paper \nEnter s for seasors\n");
	printf("Enter the character you want to chose :\n");
	scanf("%c",&you);
	
	
	if(you==comp)
	{
		printf("MATCH DRAW!!\n");
	}	
	else if((you=='p' && comp=='r')||(you=='s' && comp=='p') || (you=='r' && comp=='s'))
	{
		printf("UHUU YOU WON!!!\n");
	}
	else{
		printf("OOPS YOU LOSE THIS TIME!!!\n");
	}
   
	printf("you chose %c and computer chose %c \n",you,comp);
	printf("THANKYOU FOR PLAYING THE GAME!!!\n");
		
}*/
