#include<iostream>
using namespace std;

int minoftwo( int a, int b){
    if(a < b)
        return a;
    else
        return b;
}

int main(){

    cout << "Min = " << minoftwo(10, 90) << endl;


    return 0;
}











// output :

// Min = 10