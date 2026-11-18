#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enetr the number :";
    cin >> num;

    (num >= 0) ? cout << num <<" : The number is positive\n" : cout << num <<" : The number is Negative\n";

    return 0;
}


// output :

// Enetr the number :-50
// -50 : The number is Negative


// Enetr the number :30
// 30 : The number is positive