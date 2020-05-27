#include<stdio.h> 


struct trade{
float enter_price;
float exit_price;
float time; 
string stock; 

};


float prices[10] = 
{

102.3,
104.5,
106.7,
110
};


int main()
{
trade long, short, neutral; 

float profit = 0; 
float totalprofit = 0;
for(int i = 0; i<5; i++)
{

  long.enter_price = prices[i];
  long.exit_price  = prices[i+1];
  
  profit = 0;
  profit = long.exit_price - long.enter_price; 
  totalprofit += profit;
  
  
}

print("%d", totalprofit);


return 0; 

}
