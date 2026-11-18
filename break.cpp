#include<iostream>
using namespace std;


int main(){
    int n=20;
    int sum = 0;

    for(int i =0; i<=n; i++){
        sum += i;
        if(i == 5){            // adding break it will terminate the entire program when condition met 
            break;
        }
    }

    cout << sum;

    return 0;
}



// output :

// 15