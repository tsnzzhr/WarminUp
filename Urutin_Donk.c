#include <stdio.h>
#include <string.h>

int main(){
 
    char name[20][20];
    char temp[50];
    int i, j, input;
 
    scanf("%d", &input);
  
    for (i = 0; i < input; i++) {
        scanf("%s", name[i]);
    }    
 
    for (i = 0; i < input - 1 ; i++){//bubble sort biasa dari Z ke A
        for (j = i + 1; j < input; j++){
            if (strcmp(name[i], name[j]) < 0){//kalo ASCII di name[i] lebih kecil
                strcpy(temp, name[i]);//name[i] dipindah ke array temp
                strcpy(name[i], name[j]);//name[j] geser ke name[i], name[j] ascii lebih besar harus ditaruh di depan
                strcpy(name[j], temp);//temp pindah ke name[j]
            }
        }
    }
 
 
    for (i = 0; i < input; i++){
        printf("%s\n", name[i]);//print dari ASCII paling gede alias dari Z ke A
    }
 
     return 0;
 
}
