#include <stdio.h> 
#include <stdlib.h> 

int main()
{ 
    int *iVar; 

    iVar =(int*)(malloc(sizeof(int)); 
    
    printf("Enter number: \n";
    scanf("%d",iVar);

    printf("\nNumber: %d",*iVar); 

    free(iVar);
    return 0; 

} 
