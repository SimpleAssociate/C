#include <stdio.h>
#include <stdlib.h>

#define maxN 3



sort3(int a[], int N){ 
 int t; 
 if(a[1]>a[2])
    { t = a[1]; a[1] = a[2]; a[2] = t;}
 if(a[1]>a[3])
    { t =a[1]; a[1] = a[3]; a[3] = t;}
 if(a[2]>a[3])
    {t = a[2]; a[2] = a[3]; a[3] = t;}
}




main(){
    int N, i, a[maxN+1];
    N = 0; while(scanf("%d",&a[N+1]) != EOF) N++;
    a[0] = 0; sort3(a,N);
    for(i = 0; i<=N; i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
