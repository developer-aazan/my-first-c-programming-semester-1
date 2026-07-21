#include<stdio.h>
int main(){
int  q1,q2,q3;
float p1,p2,p3,total
discount ,finalbill;
printf("Enter quantity and price of item 1:");
scanf ("%d %f",&q1,&p1);
printf("Enter quantity and price of item 2:");
scanf ("%d %f",&q2,&p2);
printf("Enter quantity and price of item 3:");
scanf ("%d %f",&q3,&p3);
total = (q1 * p1 ) + (q2 * p2) + (q3 * p3);
if (total > 5000)
discount = total * 0.10;
else 
discount = 0;
finalbill = total - discount;
printf ("Total bill\n = %.2f",total);
printf ("Discount = %2.f",discount);
printf ("Finalbill = %.2f",finalbill);
return 0;    
}
