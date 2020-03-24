

eliminate() { 
  
  int i, j, k, max;
  float t; 
  
   for(i=i; i<=N; i++){
      max = i; 
      for(j=i+1; j<=N; j++)
         if(abs(a[j][i])>abs(a[max][i]) max = j; 
      for(k=i; k<=N+1; k++){
         t = a[i][k];
         a[i][k] = a[max][k]; 
         a[max][k] = t; 
       }
      for(j= i+1; j<=N; j++) 
          for(k=N+1; k>=i; k--) 
              a[j][k] -= a[i][k]*a[j][i]/a[i][i]; 
    } 
} 


      

