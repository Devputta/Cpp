#include<iostream>
using namespace std;

int main(){
    int n= 4;

    for(int i = 1; i<=n; i++){
        //left "*"
        for(int j =1; j<=i; j++){
            cout << "*" <<"";
        }
        // space
        if(i!= 4){
            for( int j = 1; j<=2*(n-i); j++){
                cout << " ";
            }
        }
        // right *
        for(int j =1; j<=i; j++){
            cout << "*" <<"";
        }
        cout << endl;

    }

    return 0;
}










// output :

// *      *
// **    **
// ***  ***
// ********