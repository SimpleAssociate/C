#include<stdio.h> 




int main()
{

char[20] name;
printf("Enter name(max lenght=20)"); 
scanf("%s", name);

double code;

for(int i=0; i<20; i++)
{
   code+=name[i]; 
}

printf("your name unicode = %d", code); 



return 0;
}
