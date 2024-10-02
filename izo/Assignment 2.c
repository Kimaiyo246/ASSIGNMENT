// a program to calculate compound interest 
#include <stdio.h>
int main() {
 // declari the variables 
 int principle;
 int time;
 int rate;
 
 // entering the variables 
 printf("my principle: p\n");
 scanf("%d" ,&principle);
 
 printf("my time(years): t\n");
 scanf("%d" ,&time);
 
 printf("my rate(%): r\n");
 scanf("%d" ,&rate);
 
 // declaring formula of the variables
 int amount;
 // formula of the variables 
 amount=principle *(1+rate/100)^time;
 printf("%d" ,amount);
 return 0;
 }