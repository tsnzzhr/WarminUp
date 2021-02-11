#include<iostream>

using namespace std;

int main(){
    int n;
    int check = 0;
    
    cin >> n;
    
    int j = n;
    while(j>0){
        
        if(n % j == 0){
            check++;
            //cout << check << endl;
        }
        
        j--;
    }
    
    if(check == 2){
        cout << "Ini bilangan prima, Prima!" << endl;
    }else{
        cout << "Bukan bilangan prima, Prima!" << endl;
    }
    
    return 0;
}
