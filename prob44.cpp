#include<iostream>
using namespace std;

int maxoftwo(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}

int main(){

    cout << "Max = " << maxoftwo(20,40) << endl;

    return 0;
}






// output :

// Max = 40