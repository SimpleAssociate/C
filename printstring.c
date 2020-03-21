#include <stdio.h> 

int main()
{ 

   char string[100]; 
   chat *ptr; 

   string = "Your account has been margin called"; 
   
   ptr = string; 
   
   while(*ptr!='\0'){ 
      
      printf("%c", *ptr++);

   }
      


return 0; 

} 


