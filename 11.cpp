#include<stdio.h>
int main(){
int num;
printf ("Enter a 5-digit number:");
scanf  ("%d",&num);
if     (num >=10000 && num <=99999)
printf (" Total Number of digits = 5");
else 
printf("Invalid Enter a five-digit number.");
return 0;
}
