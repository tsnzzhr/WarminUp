#include<stdio.h>

void linear_search(int arr[], int n, int item) {
   int i;
   for(i = 0; i < n; ++i) {
        if(item == arr[i])
         printf("\n%d ditemukan pada barang ke %d\n",item,i+1);
   }
}

int main(){
    unsigned int input;
    //puts("Jumlah Barang : ");
    scanf("%*s %*s");
    scanf("%d",&input);
    //puts("Angka-angka Pada Barang : ");
    scanf("%*s %*s %*s");
    
    if(input <= 50){
    int arr[input];
    int i,j;
    for(i=0; i<input; i++){
        int value;
        scanf("%d",&value);
        arr[i] = value;
    }
    
    //bubble-sort
    int swap;
        for(i=0; i< input; i++){
            for(j = i+1; j< input; j++){
                    if(arr[i] < arr[j]){
                        swap = arr[i];
                        arr[i] = arr[j];
                        arr[j] = swap;
                    
                }
            }
            
           }
        
    //puts("Barang yang dicari : ");
    scanf("%*s %*s %*s");
    
    int demand;
    scanf("%d",&demand);
    
    
    printf("Urutan Barang: ");
    for(i=0; i<input; i++){
        printf("%d ",arr[i]);
    }
    
    linear_search(arr,input,demand);    
    
    }
    
    return 0;
}
