#include<iostream>
using namespace std;

int main(){
    int n;
    int sum =0;
    cout << "Enetr the number : ";
    cin >> n;

    for(int i =0 ; i<=n; i++){
        if(i%2 != 0){
            sum += i;
            cout << i << " ";
        }
    }
    cout << "\nOdd sum = " << sum;

    return 0;
}


// output :

// Enetr the number : 10
// 1 3 5 7 9
// Odd sum = 25