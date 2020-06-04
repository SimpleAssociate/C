#include <stdio.h>

double compute(double x, double y, double z)
{
return x*y*z;
}

int main()
{
double sum;

for(int i = 2; i<100; i++)
  sum+=compute(i-1,i,i+1);
  
  printf("%f", sum);
  
  return 0;
  }
  
