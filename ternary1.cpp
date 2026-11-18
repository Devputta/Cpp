#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enetr the number :";
    cin >> num;

    cout << (num >= 0 ? " : The number is positive\n" : " : The number is Negative\n");

    return 0;
}


// output :

// Enetr the number :20
//  : The number is positive


// Enetr the number :-30
//  : The number is Negative