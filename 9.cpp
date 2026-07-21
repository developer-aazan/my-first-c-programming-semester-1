#include<stdio.h>
int main(){
int units;
int bill;
printf ("Enter  electricity units: ");
scanf  ("%d",&units);
if  (units <= 100 )
{
    bill = units * 5;
}
else if   (units <= 200)
{
    bill = (100 * 5) + (units - 100)* 8;
} 
else
{
    bill = (100 * 5) + (100 * 8)+(units - 200)*10;
   }   
printf ("Electricity Bill = Rs.2%\n",bill);   
return 0;    
}
