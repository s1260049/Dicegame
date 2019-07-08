#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int dice1;
  int dice2;
  int dice3,dice4; /* more dice is added */
  int max=1; /* biggest value of dice */
   char name[20];
  printf("What is your name?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Rolling the dice...\n");
  srand((unsigned) time(NULL));
  dice1=rand()%6+1;
  if(dice1>max) max=dice1;
  dice2=rand()%6+1;
  if(dice2>max) max=dice2;
  dice3=rand()%6+1;
  if(dice3>max) max=dice3;
  dice4=rand()%6+1;
  if(dice4>max) max=dice4;
  printf("Die 1: %d\n",dice1);
  printf("Die 2: %d\n",dice2);
  printf("Die 3: %d\n",dice3);
  printf("Die 4: %d\n",dice4);
  printf("Total value: %d\n",dice1+dice2+dice3+dice4);
  printf("Max value of dice: %d\n",max); /* print max value of dice */
  if((dice1+dice2+dice3+dice4)>14)printf("%s won!\n",name); /* if total value is more than 14, you win */
  else printf("%s lost!\n",name);
  return 0;
}
