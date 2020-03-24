

pivot(int p, int q) 
{ 
    int j, k; 
    for(j=0; j<=N; j++) 
        for(k=M+1; k>=1; k--)
            if(j!=p && k!=p) 
                 a[j][k] = a[j][k] - a[p][k]*a[j][p]/a[p][q];
    for(j=0;j<=N;j++)
          if(j!=p) a[j][q]=0; 
   for(k=1;k<=M+1;k++)
         if(k!=q) a[p][k]=a[p][k]/a[p][q]; 
   a[p][q]=1; 
}


int main(){ 


    for(;;){ 
        for(q=0;(q<=M+1) && (a[0][q]>=0);q++) ; 
        for(p=0;(p<=N+1) && (a[p][q]<=0);p++) ;
        if(q>M || p>N) break; 
        for(i=p+1; i<=N; i++)
            if(a[i][q]>0) 
               if(a[i][m+1]/a[i][q]<a[p][M+1]/a[p][q])
                     p=i; 
        pivot(p,q);
     }

return 0; 
} 


   
