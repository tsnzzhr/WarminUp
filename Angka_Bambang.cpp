#include<iostream>
#include<string.h>

using namespace std;

int main(){
    
    char angka[100];
    char reversed[100];
    
    gets(angka);
    
    int i=strlen(angka)-1;
    
    for(int j=0; j<=strlen(angka); j++){
        reversed[j] = angka[i];
        i--;
        //cout << reversed[j] << " ";            
    }

    if(strcmp(angka,reversed)==0){
        cout << "Bambang Like Dis!" << endl;
    }else{
        cout << "Bambang Liken't!" << endl;
    }
    
    return 0;
}
    
