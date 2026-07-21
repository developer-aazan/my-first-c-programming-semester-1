#include<stdio.h>
int main(){
int a = 10;
float b = 25.75f;
//int to float
float x = (float)a;
//float to int 
int y = (int)b;
printf("Int to Float = %.2f\n",x);
printf("Float to Int = %.2f\n",y);   
return 0;    
}
