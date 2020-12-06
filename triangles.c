#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void swap(triangle* tr, int less, int more)
{
    int tempa = 0, tempb = 0, tempc = 0; 
    tempa = tr[more].a; 
    tempb = tr[more].b;
    tempc = tr[more].c; 
    
        
    tr[more].a = tr[less].a;
    tr[more].b = tr[less].b; 
    tr[more].c = tr[less].c;    
    
    tr[less].a = tempa;
    tr[less].b = tempb;
    tr[less].c = tempc;
    
 }

void sort_by_area(triangle* tr, int n) {
    
    float p = 0; 
    
    float s[n];
    
	for(int i = 0; i < n; i++)
    {
        p = ( tr[i].a + tr[i].b + tr[i].c ) /2.0; 
        s[i] = sqrt(p * (p-tr[i].a) * ( p - tr[i].b) * (p - tr[i].c));
    }
    
    
    int i, j, min_index;
    int swapped = 0; 
     
    
    for(i = 0; i < n-1; i++)
    {
        min_index = i; 
        
        for(j = i+1; j < n; j++)
        {
            if(s[j] < s[min_index])
            {
                min_index = j; 
                swapped = 1; 
            }
        }
        
        if(swapped == 1)
        {
            float temp = 0; 
            swap(tr, i, min_index);
            temp = s[i];
            s[i] = s[min_index]; 
            s[min_index] = temp; 
        }
        
        swapped = 0;
            
        
    }
    
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
