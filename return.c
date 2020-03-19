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
scanf('name', %f); 
printf("\nbuying price: "); 
scanf('b', %d); 
printf("\nselling price: "); 
scanf('s', %d); 

ret = getreturn(b,s); 

printf("Return: 'ret'", %d); 




return 0; 
} 

