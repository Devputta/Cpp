#include<iostream>
using namespace std;

int main(){
    char alpha;
    cout << "Enetr the number for Maeks:";
    cin >> alpha;


    if(alpha >= 65 && alpha <= 90){   // can compare character with numeric (implicit conversion)
        cout << "Upper case" <<endl;
    }else {
        cout << "Lower case" << endl;
    }

    return 0;
}


// output :

// Enetr the number for Maeks:z
// Lower case


// Enetr the number for Maeks:Z
// Upper case

