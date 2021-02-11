#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

void armstrong(int num){
    int angka, sisa, flag = 0;
    int sum=0;
    
   for (angka = abs(num); angka > 0; flag++) {
       angka /= 10;
   }

   for (angka = abs(num); angka > 0; angka /= 10) {
       sisa = angka % 10;
        sum += pow(sisa, flag);
   }

   if (sum == num && num > 0)
    printf("%d adalah bilangan Armstrong\n", num);
   else
    printf("%d bukan bilangan Armstrong\n", num);
  
}
    


bool prima(int n){
    int flag = 0;
    
    if(n <= 0){
        return 0;
    }
    
    int i;
    for(i=2; i<n; i++){
        if(n % i == 0){
            flag++;    
        }
    }
    
    if(flag == 0){
        return 1;
    }else{
        return 0;
    }

}

void sempurna(int n){
    int i;
    int sum = n;
    
    for(i=1;i<n;i++){
        if(n % i == 0){
            //printf("%d\n",i);
            sum -= i;
        }
    }
    
    if(sum > 0 || n == 0){
        printf("%d bukan bilangan sempurna\n",n);
    }else{
        printf("%d adalah bilangan sempurna\n",n);
    }
}


int main(){
    int n;
    scanf("%d",&n);
    
    if(n <= 9999){
    
    
    if(prima(n) == 1){
        printf("%d adalah bilangan prima\n",n);
    }else{
        printf("%d bukan bilangan prima\n",n);
    }
    
    armstrong(n);
    
    
    sempurna(n);
    
    }
    
    return  0;
    
}
