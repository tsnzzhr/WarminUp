#include<stdio.h>
#include<math.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (long long arr[], int low, int high){
    long long pivot = arr[low];  
    int i = (low + 1);
     int j;
     
    for (j = low+1; j <= high; j++){
        if (arr[j] > pivot){
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i - 1], &arr[low]);
    
    return (i - 1);
}

void quicksort(long long a[], int p, int r){
    if(p < r){
        int q;
        q = partition(a, p, r);
        quicksort(a, p, q-1);
        quicksort(a, q+1, r);
    }
}


int main(){
    unsigned int input,demand;
    scanf("%u",&input);
    long long arr[input];
    int i;
    
    for(i=0;i<input;i++){
        scanf("%lld",&arr[i]);
    }
    
    scanf("%u",&demand);
    quicksort(arr, 0, input-1);
    
    /*for(i=0;i<input;i++){
        printf("%d ",arr[i]);
    }*/
    
    if(demand <= input){
        printf("%lld\n",arr[demand-1]);
    }else{
        printf("-1\n");
    }
    
    
    
    return 0;
}
