#include<stdio.h>

int main(){
    
    unsigned long long number,ways;
    
    scanf("%llu",&number);
    
    if(number != 0){
    
    ways = ((pow(number,2))-(3*number)+2)/2;
    
    printf("%llu\n",ways);
    }
    
    else{
        printf("0\n");
    }

    return 0;
}
