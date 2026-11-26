#include<iostream>
using namespace std;

void f(int n){
    int a = 0;
    int b = 1;

    for(int i = 0; i<n; i++){
        cout << a << " ";
        int next = a+b;
        a = b;
        b = next;
    }
   
}

int main(){
    f(5);

    return 0;
}