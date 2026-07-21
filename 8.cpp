#include<stdio.h>
int main(){
int days, years,months,remainingdays;
printf ("Enter number of days:");
scanf  ("%d", &days);
years = days /365;
days  = days % 365;
months = days / 30;
remainingdays = days % 30;
printf ("Years = %d\n",years);
printf ("months = %d\n,months");
printf ("days = %d\n",remainingdays);
    
return 0;    
}
