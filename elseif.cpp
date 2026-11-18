#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enetr the number for Maeks:";
    cin >> marks;


    if(marks >= 90){
        cout << "Grade A" <<endl;
    }
    else if(marks >= 80 && marks < 90) {
        cout << "Grade B"<< endl;
    }else {
        cout << "Grade C" << endl;
    }

    return 0;
}


// output :

// Enetr the number for Maeks:99
// Grade A


// Enetr the number for Maeks:70
// Grade C

