#include<stdio.h>

int main(){
    unsigned int b;
    
    unsigned int i,j,k,m,n,t,u;
    
    scanf("%d %d %d",&m,&n,&b);
    
    if(m <= 10 && n <= 10 && b <= 100){
    
    
    int arr[n][m];
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            arr[i][j] = 0;  
        }
    }
    
    for(k=0; k<b; k++){
        scanf("%d %d",&t,&u);
        
        if(t <= n && u <= m){
            arr[u-1][t-1]= -1;
        }
        
        else{
            printf("Input gagal!\n");
            return 0;
        }
    }

    int x,y;
    for(x=0;x<n;x++){
        for(y=0;y<m;y++){
            if(arr[x][y] != -1){
                
                if(arr[x-1][y] == -1){
                    if((x-1)>=0){
                        arr[x][y]++;
                    }
                }
                if(arr[x][y-1] == -1){
                    if((y-1)>=0){
                        arr[x][y]++;
                    }
                }
                if(arr[x][y+1] == -1){
                    if((y+1)<m){
                        arr[x][y]++;
                    }
                }
                if(arr[x+1][y] == -1){
                    if((x+1)<n){
                        arr[x][y]++;
                    }
                }
                if(arr[x-1][y-1] == -1){
                    if((x-1)>=0 && (y-1)>=0){
                        arr[x][y]++;
                    }
                }
                if(arr[x-1][y+1] == -1){
                    if((x-1)>=0 && (y+1)<m){
                        arr[x][y]++;
                    }
                }
                if(arr[x+1][y-1] == -1){
                    if((x+1)<n && (y-1)>=0){
                        arr[x][y]++;
                    }
                }
                if(arr[x+1][y+1] == -1){
                    if((x+1)<n && (y+1)<m){
                        arr[x][y]++;
                    }
                }
            }
        }
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);    
        }
        printf("\n");
    }
    
    }
    
    return 0;
}
