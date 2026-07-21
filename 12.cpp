#include<stdio.h>
int main(){
int num, d1, d2, d3;
printf ("Enter a three digit number: ");
scanf  ("%d",&num);
d1 = num % 10;
d2 = (num / 10)%10;
d3 = (num / 100)%10;
printf ("Reverse Number = %d%d%d",d1,d2,d3);    
    
return 0;    
}
