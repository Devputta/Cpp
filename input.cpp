#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter the age :";
    cin >> age;

    cout << "The age is :" << age <<endl;
    if(age > 18){
        cout << "Aligiable to Vote\n" << "Able to drive\n";
    }else{
        cout << "Not eligable at all";
    }


    return 0;

}




// output:

// Enter the age :20
// The age is :20
// Aligiable to Vote
// Able to drive


// Enter the age :12
// The age is :12
// Not eligable at all
