
#include <stdio.h>

int main(){ 


FILE *fptr; 

fptr = fopen("myfile.txt","w"); 
if(fptr==NULL){
   printf("Error"); 
   return -1; 
} 
fclose(fptr);

return 0;
}
