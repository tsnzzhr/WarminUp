#include<stdio.h>
#include<string.h>
//program nama digit

int main(){
    char a[100];
    
    scanf("%s",&a);
    
    int i;
    for(i = 0; i<strlen(a); i++){
        if(a[i]=='0'){
            printf("Nol ");
        }
        if(a[i]=='1'){
            printf("Satu ");
        }
        if(a[i]=='2'){
            printf("Dua ");
        }
        if(a[i]=='3'){
            printf("Tiga ");
        }
        if(a[i]=='4'){
            printf("Empat ");
        }
        if(a[i]=='5'){
            printf("Lima ");
        }
        if(a[i]=='6'){
            printf("Enam ");
        }
        if(a[i]=='7'){
            printf("Tujuh ");
        }
        if(a[i]=='8'){
            printf("Delapan ");
        }
        if(a[i]=='9'){
            printf("Sembilan ");
        }
    }
    
    printf("\n");
    return 0;
        
}
