#include<iostream>
using namespace std;

int main(){
    char alpha;
    cout << "Enetr the number for Maeks:";
    cin >> alpha;


    if(alpha >= 'a' && alpha <= 'z'){
        cout << "Lower case" <<endl;
    }else {
        cout << "Upper case" << endl;
    }

    return 0;
}


// output :

// Enetr the number for Maeks:z
// Lower case


// Enetr the number for Maeks:Z
// Upper case

