#include<stdio.h>

//program EZMath
//constrain a,b; 0 <= a,b <= 999

int main(){
    unsigned long int a,b;
    char c;
    long int result;
    
    scanf("%lu %lu %c",&a,&b,&c);
    
    if((a >= 0 && b >=0) && (a <= 999 && b <= 999)){

    if(c == 'K'){
        result = a * b;
        printf("%lu\n", result);
    }if(c == 'B'){
        if(b == 0){
            printf("Maaf, input anda salah\n");    
        }else{
            result = a / b;
            printf("%lu\n", result);
        }
    }if(c == 'M'){
        result = a - b;
        printf("%lu\n", result);
    }if(c == 'P'){
        result = a + b;
        printf("%lu\n", result);
    }
    
    }else{
        printf("Maaf input anda salah\n");
    }
    
    return 0;
}
