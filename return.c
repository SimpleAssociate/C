#include <stdio.h> 



double getreturn( double b, double s)
{
   double r; 
   r=(s-b)/b;
   return r; 
} 





int main()
{ 

char name; 
double b,s, ret; 

printf("Print name of underlying: "); 
scanf("%f", name); 
printf("\nbuying price: "); 
scanf("%d", b); 
printf("\nselling price: "); 
scanf("%d", s); 

ret = getreturn(b,s); 

printf("Return: %d", ret); 




return 0; 
} 

