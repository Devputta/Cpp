#include<iostream>
using namespace std;

int main(){
    int n=4;
    char name = 'A';
    

    for(int i =0; i<n; i++){
        
        for(int j=0; j<i+1; j++){  //space printing 
            cout << " ";
        }
        for(int j=0; j<n-i;j++){  //after printing space then number n-1 (4-1)
            cout << name ;
            
        }
        name++;
        cout << endl;
    }

    return 0;
}







// output :

//  AAAA
//   BBB
//    CC
//     D
