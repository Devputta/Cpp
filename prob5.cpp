#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the Number: ";
    cin >> n;
    int sum = 0;
    int i=1;

    while(i <= n ){
        sum += i;
        i++;
    }

    cout << sum;

    return 0;
}



// output :

// Enter the Number: 5
// 15