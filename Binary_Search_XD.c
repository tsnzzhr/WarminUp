#include<stdio.h>

int input;

int main(){
    int value;
    scanf("%d",&input);
    
    if(input > 0 && input <= 50){
    
        int arr[input][input];
        int i,j;
        
        for(i=0; i<input; i++){
            for(j=0; j<input; j++){
                scanf("%d",&value);    
                arr[i][j] = value;
            }
        }
        
        int demand;
        scanf("%d",&demand);

        int swap,k;
    
        for(i=0; i< input; i++){
            for(j = 0; j< input; j++){
                for(k = 0; k < input-j-1; k++){
                    if(arr[i][k] > arr[i][k+1]){
                        swap = arr[i][k];
                        arr[i][k] = arr[i][k+1];
                        arr[i][k+1] = swap;
                    }
                }
            }
            
           }
        
        for(i=0; i<input; i++){
            for(j=0; j<input; j++){
                if(arr[i][j] == demand){
                    printf("%d %d\n",i+1,j+1);
                    return 0;
                }
            }
        }
        
        /*for(i=0; i<input; i++){
            for(j=0; j<input; j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }*/

    }
    
    return 0;    
}
