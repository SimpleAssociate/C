#define scan -1

int match(char *a) 
{ 
   int n1, n2; 
   int j=0; 
   int N = strlen(a), state = next1[0]; 
   
   dequeinit(); put(scan); 

   while(state)
   { 
       if(state==scan){ j++, put(scan); }
       else if(ch[state] == a[j]) 
           put(next1[state]); 
       else if(ch[state] == ' ')
       { 
           n1=next1[state]; 
           n2=next2[state]; 
           push(n1); 
           if(n1!=n2) push(n2); 
       } 
     
      if(dequeempty() || j==N) return 0; 
      state = pop(); 
   }
       
return j; 


} 
