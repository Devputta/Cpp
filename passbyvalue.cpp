#include<iostream>
using namespace std;

int sum(int x, int y){
    return x+y;
}

int main(){
    int a=10,b=20;   // copy of an argument is passed to function irrespecative of variable name 
    cout << "Sum : "<< sum(a,b) << endl;
    

    return 0;
}








// output :

// Sum : 30