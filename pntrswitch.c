#include <stdio.h> 

int main()

{ 

int temp; 

int x; 
int y;

int *p; 
int *q;

printf("Enter Stock Price: \n"); 
scanf("%d", x); 

p = *x; 

printf("Enter Stock Price: \n"); 
scanf("%d", y); 

q = *y; 

//switching prices now 

temp =&q;
&q=&p;
&p=temp; 

printf("Beginining Stock Price: %d", &q); 
printf("\nEnding Stock Price: %d", &p); 



return 0;
} 
