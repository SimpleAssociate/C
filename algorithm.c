#include <stdio.h> 

int main()
{ 
int a,b,c; 
a=10;
b=20; 
c=30; 

for(int i=0;i<=100;i++)
    for(int j=0;j<=100;j++)
       c=a*a;
       b=c+a;
       a+=a*b*c; 


return 0;
} 


