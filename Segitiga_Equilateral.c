#include <stdio.h> 
#include <math.h>

int main() { 
    
    unsigned int x, count;
    
    scanf("%d",&x); 
    
    count = (x*(x+2)*((2*x)+1))/8;
    
    printf("%d\n",count);
    
    return 0; 
} 
