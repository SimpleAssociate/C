#include <stdio.h> 

struct underlying
{ 
  string name; 
  double price; 
  double sigma; 
} 

int main(){ 

  struct underlying AAPL;
  
  AAPL.name = "Apple"; 

  AAPL.price = 236.98; 

  AAPL.sigma= 45.11; 
  
  return 0; 
}
