#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int dice1;
  int dice2;
 
  printf("Rolling the dice...\n");
  srand((unsigned) time(NULL));
  dice1=rand()%6+1;
  dice2=rand()%6+1;
  printf("Die 1: %d\n",dice1);
  printf("Die 2: %d\n",dice2);
  printf("Total value: %d\n",dice1+dice2);

  return 0;
}
