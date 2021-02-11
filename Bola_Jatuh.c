#include<stdio.h>
#include<math.h>
//program bola jatuh

int main(){
    
    unsigned long a,b,c;
    
    scanf("%lu %lu %lu",&a,&b,&c);
    
    if(b<c){
        
    printf("%lu\n",((a*c) + (a*b))/(c-b));
    
    }
    
    
    
    return 0;
}
