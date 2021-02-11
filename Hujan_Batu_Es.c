#include<stdio.h>


int pattern(int n){
    
    if(n == 1){
        return 1;
    }else if( n % 2 == 0){
        return n / 2;
    }else{
        return n * 3 + 1;
    }
    
}


int main(){
    
    int n;
    
    scanf("%d",&n);
    
    printf("%d ",n);
    
    while(n > 1){
    
    
    printf("%d ",pattern(n));
    
    if(n == 1){
        break;
    }
    
    n = pattern(n);
    
    }
    
    return 0;
}
