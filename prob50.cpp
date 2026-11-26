#include<iostream>
using namespace std;

void prime(int n){
    bool primen = true;
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            // cout << n << ": Non Prime Number" << endl;
            primen = false;
        }
    }
    (primen == true) ? cout << n << " : its a prime number " << endl : cout << n << " : its a NON Prime Number " << endl;
     
}

int main(){

    prime(101);

    return 0;
}





// output :
// 101 : its a prime number 3

// 9 : its a NON Prime Number 