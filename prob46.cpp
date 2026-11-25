#include<iostream>
using namespace std;

int fact(int n){
    int mul = 1;
    for(int i = 1; i<=n; i++){
         mul *=i;
    }
    return mul;
}

int main(){

    cout << "Total factroial: " << fact(5);

    return 0;
}










// output :

//Total factroial: 120