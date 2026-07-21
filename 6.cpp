#include<stdio.h>
int main(){
int a=5, b=10;
printf  ("Enter first integer:");
scanf   ("%d",&a);
printf  ("Enter second integer:");
scanf   ("%d",&b);
printf  ("Before swaping:\n");
printf  ("a = %d\n",a);
printf  ("b = %d\n",b);
a = a + b;
b = a - b;
a = a - b;
printf  ("After swapping:\n");
printf  ("a = %d\n",a);
printf  ("b = %d\n",b);    
return 0;    
}
