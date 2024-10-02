// A program to identify whether a customer of a certain age qualifies   fi a loan
#include <stdio.h>
int main() {
 //Declaring variables 
 int Book_ID;
 int Due_Date;
 int Return_Date;
 //Entering variables
 printf("Enter Book ID: ");
 scanf("%d" ,&Book_ID);
 
 printf("Enter Due Date: ");
 scanf("%d" ,&Due_Date);
 
 printf("Enter Return_Date: ");
 scanf("%d" ,&Return_Date);
 // calculating days overdue 
 int Days_overdue;
 Days_overdue = Return_Date - Due_Date;
 printf("This is your Days_Overdue: %d\n" ,Days_overdue);
 
 // Fine rate
 // if statement with true conditio
 if (Days_overdue == 7)
     printf("Ksh.20 is your charges for:%d days",Days_overdue);
 
 else if(Days_overdue >= 8 && Days_overdue <= 14 )
     printf("Ksh.50 is your charges for:%d days",Days_overdue);
 
 else if(Days_overdue >= 15)
 printf("Ksh.100 is your charges for:%d days",Days_overdue);
 
return 0;
}