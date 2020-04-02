#include <stdio.h> 

int main(){

   int x=20; 
   float y= 10; 
   char c = 'a'; 
   void *ptr; 

   ptr= &x;
   printf("Void Pointer points to %d", *((int *)ptr));
   
   ptr = &y;
   printf("Void Pointer points to %f", *((float *)ptr)); 

   ptr= &c; 
   printf("Void Pointer points to %c", *((char *)ptr)); 

return 0;
} 

