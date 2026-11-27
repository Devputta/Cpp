#include<iostream>
using namespace std;

int main(){
    int choice;
    cout << "Enter the choice :(1-7 for days) :  \n";
    cin >> choice;

    switch (choice)
    {
    case 1 : cout << "Monday";   
        break;
    case 2 : cout << "Tuesday";   
        break;
    case 3 : cout << "Wednesday";   
        break;
    case 4 : cout << "Thursday";   
        break;
    case 5 : cout << "Friday";   
        break;
    case 6 : cout << "Saturday";   
        break;
    case 7 : cout << "Sunday";   
        break;
    
    default:
        break;
    }

    return 0;
}









// output :


// Enter the choice :(1-5) :  
// 1
// Monday

// Enter the choice :(1-7 for days) :  
// 7
// Sunday

// Enter the choice :(1-7 for days) :  
// 5
// Friday