#include <stdio.h> 


int main()
{
     float twoSum= 0; 
     float threeSum=0;
     float fourSum =0;

    for(int i=0; i<100; i++) {
        if(i%2==0)
           {
              twoSum+=i;
           }
         
        if(i%3==0)
          {
              threeSum+=i;
           }
         if(i%4==0)
         {
               fourSum +=0;
         } 
           
    }

    
    return 0;
} 
