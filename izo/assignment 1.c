// a program to calculate simple interest
#include <stdio.h>
int main() {
 // declaring variables 
 int principle;
 int time;
 int rate;
 
 // entering of values
 printf("enter principle: p\n");
 scanf("%d" ,&principle);
 
 printf("enter time(years): t\n");
 scanf("%d" ,&time);
 
 printf("enter rate: r\n");
 scanf("%d" ,&rate);
 
 // formula of variable
 int interest;
 interest=(principle*time*rate)/100;
 printf("%d" ,interest);
    return 0;
}