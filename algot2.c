#include <stdio.h> 

int main()
{
  float num1, num2;  
  printf("\nEnter Number 1:  ");
  scanf("%f", &num1); 


 
  printf("\nEnter Number 2: ");
  scanf("%f", &num2);



  double sum = 0;

  for(int i = 0; i < num1 + num2; i++)
  {
    sum += num1 + num2; 
    printf("\nIteration: %d", i);
  }

  printf("\nNumber1 : %f", num1);
  printf("\nNumber 2 :  %f", num2);
  printf("\nCalculated Sum of Iterations: %f", sum);


  return 0;
}
