#include<stdio.h>
int main(){
int     a=5 , b=10 , temp;
printf  ("Enter first integer:");
scanf   ("%d",&a);
printf  ("Enter secound integer:");
scanf   ("%d",&b);
printf  ("Before swaping:\n ");
printf  ("a = %d\n",a);
printf  ("b = %d\n",b);
temp = a;
a = b;
b = temp;
printf  ("After swaping:\n");
printf  ("a = %d\n",a);
printf  ("b = %d\n",b); 

return 0;    
}
