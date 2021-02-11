#include<stdio.h>

typedef struct{
    int jam;
    int menit;
    int detik;
}time;

int main(){

    time jam1;
    time jam2;
    unsigned jam, menit, detik;
    
    scanf("%d %d %d",&jam1.jam,&jam1.menit,&jam1.detik);
    scanf("%d %d %d",&jam2.jam,&jam2.menit,&jam2.detik);
    
    if(jam1.jam >= 0 && jam1.jam <= 24 && jam2.jam >= 0 && jam2.jam <= 24
    && jam1.menit >= 0 && jam1.menit <= 59 && jam2.menit >= 0 && jam2.menit <= 59
        && jam1.detik >= 0 && jam1.detik <= 59 && jam2.detik >= 0 && jam2.detik <= 59){
        
        printf("Beda Waktunya : ");
        
        
        if(jam1.jam > jam2.jam){
            printf("%d:%d:%d - %d:%d:%d = ",
                jam1.jam,jam1.menit,jam1.detik,jam2.jam,jam2.menit,jam2.detik);
        
            if(jam1.detik < jam2.detik){
                jam1.detik += 60;
                jam1.menit -= 1;
            }
            
            if(jam1.menit < jam2.menit){
                jam1.menit += 60;
                jam1.jam -= 1;
            }
            
            detik = jam1.detik - jam2.detik;
            menit = jam1.menit - jam2.menit;    
            jam = jam1.jam - jam2.jam;
        
        }else if(jam1.jam < jam2.jam){
        
            printf("%d:%d:%d - %d:%d:%d = ",
                jam2.jam,jam2.menit,jam2.detik,jam1.jam,jam1.menit,jam1.detik);
        
            if(jam2.detik < jam1.detik){
                jam2.detik += 60;
                jam2.menit -= 1;
            }
            
            if(jam2.menit < jam1.menit){
                jam2.menit += 60;
                jam2.jam -= 1;
            }
            
            detik = jam2.detik - jam1.detik;
            menit = jam2.menit - jam1.menit;
            jam = jam2.jam - jam1.jam;
            
        }else if(jam1.jam == jam2.jam){
            
            if(jam1.menit > jam2.menit){
                printf("%d:%d:%d - %d:%d:%d = ",
                jam1.jam,jam1.menit,jam1.detik,jam2.jam,jam2.menit,jam2.detik);
                
                if(jam1.detik < jam2.detik){
                    jam1.detik += 60;
                    jam1.menit -= 1;
                }
                
                detik = jam1.detik - jam2.detik;
                menit = jam1.menit - jam2.menit;
                jam = jam1.jam - jam2.jam;
            }else if(jam2.menit > jam1.menit){
                printf("%d:%d:%d - %d:%d:%d = ",
                jam2.jam,jam2.menit,jam2.detik,jam1.jam,jam1.menit,jam1.detik);
            
                if(jam2.detik < jam1.detik){
                    jam2.detik += 60;
                    jam2.menit -= 1;
                }
                
                detik = jam2.detik - jam1.detik;
                menit = jam2.menit - jam1.menit;
                jam = jam2.jam - jam1.jam;
            }else if(jam2.menit == jam1.menit){
            
                if(jam1.detik > jam2.detik){
                    printf("%d:%d:%d - %d:%d:%d = ",
                    jam1.jam,jam1.menit,jam1.detik,jam2.jam,jam2.menit,jam2.detik);
                
                    detik = jam1.detik - jam2.detik;
                    menit = jam1.menit - jam2.menit;
                    jam = jam1.jam - jam2.jam;
                }else{    
                    printf("%d:%d:%d - %d:%d:%d = ",
                    jam2.jam,jam2.menit,jam2.detik,jam1.jam,jam1.menit,jam1.detik);
                
                    detik = jam2.detik - jam1.detik;
                    menit = jam2.menit - jam1.menit;
                    jam = jam2.jam - jam1.jam;
                
                }
                
            }
            
        }
    
    
        printf("%d:%d:%d\n", jam, menit, detik);        
    }
    
    return 0;
}
