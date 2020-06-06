#include<stdio.h>



int main() 
{

string ticker;
double price;

printf("Enter ticker symbol");
scanf("%s", ticker);
printf("entrr price");
scanf("%f", price);

double initial=price; 

for(int i=0; i<10; i++)
{
    printf("\nEnter new price: ");
    scanf("%f", price);
} 

printf("Totla Gain: %f", price-inital); 

return 0;
}

