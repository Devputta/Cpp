#include<iostream>
using namespace std;

int main(){
    int a =10;
    int b = a--; //post decrement;

    cout << "B = " << b <<endl;
    cout << "A = "<< a <<endl;


    return 0;
}

// output :

// B = 10
// A = 9