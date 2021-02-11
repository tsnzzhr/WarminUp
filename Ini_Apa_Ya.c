#include<stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    
    if((a >=65 && a <=90) || (a >= 97 && a<=122)){
        printf("ini huruf bro\n");
    }else if(a >= 48 && a <= 57){
        printf("ini angka bro\n");
    }else{
        printf("ini karakter spesial bro\n");
    }
    
    return 0;
}
