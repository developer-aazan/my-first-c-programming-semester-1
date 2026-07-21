#include<stdio.h>
int main(){
int num,d1,d2,d3,sum;
printf("Enter a three digit number:");
scanf ("%d",&num);
d1 = num % 10;
d2 = (num / 10) % 10;
d3 = num /100;
sum = d1 + d2 + d3;
printf ("Sum of digits = %d",sum);
return 0;    
}
