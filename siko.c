#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {


  int a,b;

 srand((unsigned int)time(NULL));
  a=rand()%6+1;
  b=rand()%6+1;



char c[100];
 
printf("What is your name?\n");
  printf("> ");
  scanf("%s",c);

  printf("HEllo, %s!\n",c);

printf("Rolling the dice...\n");
  printf("Die 1: %d\n",a);
   printf("Die 2: %d\n",b);

   printf("Total value: %d\n",a+b);



   if((a+b)>7) printf("%s won!\n",c);
   else printf("%s lost!\n",c);

   return 0;


}
