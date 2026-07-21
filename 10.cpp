#include<stdio.h>
int main(){
float basic,hra,gross;
printf ("Enter basic salary:");
scanf  ("%f",&basic);
hra   =  basic * 0.20;
gross = basic + hra;
printf ("House Rent Allowance = %.2f\n",hra);
printf ("Gross Salary = %.2f\n",gross);
return 0;    
}
