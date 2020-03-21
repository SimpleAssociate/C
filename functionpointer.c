#include <stdio.h> 


int addnumbers(int x, int y) 
{ 
    return x+y; 
} 

int main()
{ 
    int a=10; 
    int b=10; 

    int (*getsum)(int,int); 

    getsum=&addnumbers; 

    int sum = (*getsum)(a,b); 

    return 0;

}
