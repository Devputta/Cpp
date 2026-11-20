#include<iostream>
using namespace std;

int main(){
    int n =4;
    char num ='A';      // for character pattren 

    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }


    return 0;
}



// output :

// A B C D 
// E F G H 
// I J K L 
// M N O P 