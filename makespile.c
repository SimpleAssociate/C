makespline() 
{ 
   scanf("%d", &N); 
   for(i=1; i<=N; i++){ 
      scanf("%f %f\n", &x[i], &y[i]); 
   
   for(i=2; i<N; i++) d[i] = 2*(x[i+1]-x[i-1]); 
   for(i=1; i<N; i++) u[i] = x[i+1] - x[i-1]; 
   for(i=2; i<N; i++)
   {
       w[i] = 6.0 * ((y[i+1]-y[i])/u[i] - (y[i] -y[i-1])/u[i-1]; 
   } 
   p[1] = 0.0;
   p[N] = 0.0; 

  for(i=2; i<=N-1; i++)
  {
     w[i+1] = w[i+1]-w[i]*u[i]/d[i]; 
     d[i+1] = d[i+1]-u[i]*u[i]/d[i]; 
  } 
  for(i=N-1; i>1; i--)
     p[i]=(w[i]-u[i]*p[i+1])/d[i]; 
} 


   


