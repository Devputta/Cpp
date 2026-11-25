#include<iostream>
using namespace std;

void sumOfN(int n){
    int sum = 0;
    for(int i = 1; i<=n; i++){
         sum +=i;
    }
    cout << "Total sum: " << sum;
}

int main(){

    sumOfN(5);

    return 0;
}










// output :

// Total sum: 15