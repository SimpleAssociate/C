#include<iostream>

one_over_n(float x){

return 1/x;

}

int main() 
{

float sum;
float value; 

float x=1.0; 

for(int i=0; i<=100; i++)
{
      value=one_over_n(x); 
      sum+=value; 
      x++;

}



return 0;
}
