#include<stdio.h>
#include<string.h>

int s;
int map[10][10];
int milik=0;
int sum=0;
int node=0;
double danger_level;


void check(int a, int b){
    
    map[a][b]= 0;
    
    if(map[a+1][b] != 0 && a<s){
        sum += map[a+1][b];
        node++; 
        check(a+1,b);
    }
    if(map[a][b+1] != 0 && b<s){
        sum += map[a][b+1];
        node++;
        check(a,b+1);
    }
    if(map[a-1][b] != 0 && a>0){
        sum += map[a-1][b]; 
        node++;
        check(a-1,b);
    }
    if(map[a][b-1] != 0 && b>0){
        sum += map[a][b-1];
        node++;
        check(a,b-1);
    }
    
}


void ubah(int a, int b){
    
    if(map[a][b] != 0){
        check(a,b);
    }
    
}

void proses(int s){
    int i,j;
    //int k,l;
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            if(map[i][j] != 0){
                node++;
                sum += map[i][j];
                ubah(i, j);
                milik++;
                
                    /*for(k=0;k<s;k++){
                        for(l=0;l<s;l++){
                            printf("%d ",map[k][l]);
                        }
                        printf("\n");
                    }*/
                printf("daerah %d : ",milik);
                        
                printf("total kesulitan %d ",sum);        
    
                printf("dengan %d node, ", node);
                
                danger_level = (double)sum/(double)node;
                    
                printf("danger level : %.2lf\n", danger_level);
                
                sum = 0;
                
                node = 0;
            }
        }    
    }
}


int main(){
    
    scanf("%d",&s);
    
    int a;
    int i,j;
    
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            scanf("%d",&a);
            if(a >= 0 && a <= 9){
            
            map[i][j] = a;
        
            }else{
                return 0;
            }
        }
    }
    
    proses(s);
    

    return 0;
    
}
