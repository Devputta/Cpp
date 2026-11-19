#include<iostream>
using namespace std;

int main(){
    int n;
    int sum =0;
    cout << "Enetr the number : ";
    cin >> n;

    for(int i =0 ; i<=n; i++){
        if(i%2 == 0){
            sum += i;
            cout << i << " ";
        }
    }
    cout << "\nEven sum = " << sum;

    return 0;
}


// output :

// Enetr the number : 10
// 0 2 4 6 8 10 
// Even sum = 30