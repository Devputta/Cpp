#include<iostream>
using namespace std;

int printHello(){
    cout << "Hello\n";

    return 3;
}

int main(){

    int val = printHello();

    cout << "Value = "<< val ;


    return 0;
}