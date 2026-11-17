
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter values for A and B: ";
    cin >> a >> b;

    int sum = a + b;
    int multi = a * b;
    int sub = a - b;
    float div = (float)a / b;
    int mod = a % b;

    cout << "The sum of 2 numbers: " << sum << endl;
    cout << "The multiplication of 2 numbers: " << multi << endl;
    cout << "The subtraction of 2 numbers: " << sub << endl;
    cout << "The division of 2 numbers: " << div << endl;
    cout << "The modulus of 2 numbers: " << mod << endl;

    return 0;
}


// output:

// Enter values for A and B: 20
// 30
// The sum of 2 numbers: 50
// The multiplication of 2 numbers: 600
// The subtraction of 2 numbers: -10
// The division of 2 numbers: 0.666667
// The modulus of 2 numbers: 20
