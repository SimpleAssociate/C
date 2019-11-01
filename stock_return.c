#include <stdio.h>

int main(void) {

 float open_price, close_price; 
 float p_return; 
 float dreturn; 
 float amount_shares; 



 open_price = 110.0; 
 close_price = 114.0; 
 amount_shares = 100; 

 float step = 0.1; 

 float lower = 0; 

 lower = open_price; 


  printf("10 Cent Increment Stock Return : \n\n");
  while(open_price <= close_price){
    p_return = 100*(close_price - open_price)/(open_price);

    dreturn = 100*(close_price-open_price);

    
    printf("Open Price : %.3f\n",open_price);
    printf("Close Price : %.3f\n",close_price);
    printf("100 Share Dollar Return : +%.3f\n",dreturn);
    printf("Percent Return : %.3f\n", p_return);

    open_price = open_price + step;
  }

  return 0;
}
