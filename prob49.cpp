#include<iostream>
using namespace std;

void prime(int n){
    for(int i = 2; i<=n; i++){
        if(n%i == 0){
            cout << n << ": Non Prime Number" << endl;
            break;
        }
       cout << "Its a Prime Number : " << n << endl;
       break;
    }
     
     
}

int main(){

    prime(333);

    return 0;
}





// output :

// Its a Prime Number : 333