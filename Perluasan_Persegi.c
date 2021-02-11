#include<stdio.h>
#include<math.h>
// Driver Code 
int main() {
    unsigned long square,m,a,width_n;
    
    scanf("%lu",&a);
    
    width_n = pow((1 + (a+a)),2);
    
    //printf("%lu\n",width_n);
    
    m = sqrt(width_n);

    square = m * (m + 1) * (2 * m + 1) /  6; 
    
    printf("%lu\n",square); 
    
    return 0;

} 

