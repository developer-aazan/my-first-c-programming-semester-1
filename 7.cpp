#include<stdio.h>
int main(){
int amount;
printf   ("Enter amount:\n");
scanf    ("%d",&amount);
printf   ("5000 Notes = %d\n",amount /5000);
amount = amount % 5000;
printf   ("1000 Notes = %d\n",amount /1000);
amount = amount % 1000;
printf   ("500 Notes = %d\n",amount /500);
amount = amount % 500;
printf   ("100 Notes = %d\n",amount /100);
amount = amount % 100;
printf   ("50 Notes = %d\n",amount /50);
amount = amount % 50;
printf   ("20 Notes = %d\n",amount /20);
amount = amount % 20;
printf   ("10 Notes = %d\n",amount /10);
amount = amount % 10;
return 0;    
}
