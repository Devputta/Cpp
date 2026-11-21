#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int num = 1;
    char name = 'A';
    

    for(int i = 0; i< n; i++){
        for(int j =0; j<i+1; j++){
            cout << name <<" ";
            num++;
            name += 1;
        }
        cout << endl;
    }

    return 0;
}







// output :
// A 
// B C 
// D E F 
// G H I J  