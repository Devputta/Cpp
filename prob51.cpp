#include<iostream>
using namespace std;

void prime(int n){

    for(int num = 2; num <= n; num++){

        bool primen = true;

        for(int i = 2; i * i <= num; i++){
            if(num % i == 0){
                primen = false;
                break;
            }
        }

        if(primen == true){
            cout << num << " ";
        }
    }
}

int main(){
    prime(100);


    return 0;
}







// output :

// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 