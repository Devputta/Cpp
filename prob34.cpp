#include<iostream>
using namespace std;

int main(){
    int n= 4;
    

    for(int i =0; i<n; i++){
        char name = 'A';
        //spaces : n-i-1
        for(int j= 0; j<n-i-1; j++){
            cout << " ";
        
        }
        // num1 : i+1
        for(int j=0; j<=i; j++){
            cout <<name ;
            name++;
        }
        name -= 2;
        // num2 : 
        for(int j = i; j>0; j--){
            cout << name ;
            name--;
        }

    cout << endl;
    }

    return 0;
}





// output :

//    A
//   ABA
//  ABCBA
// ABCDCBA


