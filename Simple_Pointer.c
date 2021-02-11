#include <stdio.h>

int main(){
    char kalimat[100];
    char *p;
    int  vokal=0,konsonan=0;

    gets(kalimat);
   
    p = kalimat;

    while(*p != '\0')
    {
        
        if(*p =='A' ||*p =='E' ||*p =='I' ||*p =='O' ||*p =='U'||*p =='a' ||*p =='e' ||*p =='i' ||*p =='o' ||*p =='u')
            vokal++;
        else
            if(*p != ' ') konsonan++;
        
        p++;
    }

    printf("Jumlah Vokal: %d\n",vokal);
    printf("Jumlah Konsonan: %d\n",konsonan);
    return 0;
}
