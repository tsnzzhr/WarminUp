#include<stdio.h>

//program lompat-lompat

int main(){
    unsigned int a;
    unsigned long long b;

    scanf("%d %llu",&a,&b);
    
    unsigned long long position = a;
    
    while(b > 0){
        position += b;
        b -= 1;
        
        if(b == 0){
            printf("%llu\n", position);
            break;
        } 
    }
    
    return 0;
}
