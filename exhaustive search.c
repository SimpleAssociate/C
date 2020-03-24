
visit(int k) 
{ 
    int t; 
    val[k] = ++id; 
    if(id==V) writeperm(); 
    for(t=1; t<=V; t++) 
        if(val[t]==0) visit(t); 
    id--; 
    val[k] = 0; 



} 
