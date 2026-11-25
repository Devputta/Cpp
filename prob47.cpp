// digit sum 123 = 1+2+3 = 6


#include<iostream>
using namespace std;

int sum(int n){
    int digit =0;
    while(n > 0){
        int lastg = n%10; // re -> n % 10 → extracts the last digit. -> 123 % 10 = 3
        n = n/10; // co -> n / 10 → removes the last digit (integer division). ->123 / 10 = 12
        digit += lastg;
    }
    return digit;
}

int main(){

    //sum(123);
     
    cout << "Sum : "<< sum(123) << endl;
    

    return 0;
}








// output :

// Sum : 30