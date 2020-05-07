#include<stdio.h> 

int max(int n, int x)
{ 
    if(n>x) return n;
    else return x; 
} 


int main(void) 
{ 
 int a=1, b=8; 
 int *pa= &a; 
 int *pb =&b; 
 
  int max_;
  max_=max(*pa,*pb); 
  
   printf("%d",max_);  
 
} 
