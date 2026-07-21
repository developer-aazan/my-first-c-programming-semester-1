#include<stdio.h>
int main(){
float cp,sp;
scanf ("%f%f",&sp,&cp);
if    (sp > cp)
printf("Profit = %.2f",sp-cp);
else if (cp > sp)       
printf ("Loss = %.2f",cp-sp);
else
printf ("No profit No Loss ");
return 0;
}
