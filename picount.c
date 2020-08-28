#include<stdio.h> 
#include<math.h> 

float picount= 0; 

for(int i = 1; i < 100; i++) { 
    
    picount +=i*3.14159;
    
} 

printf("PiCount: "); 
printf("%f", picount); 

printf("\nEnd"); 
