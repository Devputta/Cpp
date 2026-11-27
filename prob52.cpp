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
    f(10);

    return 0;
}









// output :

// 0 1 1 2 3 5 8 13 21 34