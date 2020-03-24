#include <stdio.h> 

int main() 
{


double *p_snp[500];  
double snp[500]; 

for(int i = 0; i<500; ++i)
p_snp[i]= &snp[i];


return 0;

}
