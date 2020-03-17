#include <stdio.h> 

int largest(int arr[], int num) 
{ 
    int i, max; 
    max=arr[0]; 
    

    for(i=1; i<num; i++)
       if(arr[i]>max)
           max=arr[i];


   return max; 
    
} 



int main()
{ 
   int values= 10; 

   int numbers[values] = {10, 20, 40, 30, 70, 80, 90, 60};


   int largestnumber = largest(numbers, values); 

   printf(" Largest is %d", largestnumber); 

   return 0;

}
