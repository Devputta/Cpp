#include<iostream>
using namespace std;

int main(){
    int n = 4;
    //int num = 1;
    //char name = 'A';
    

    for(int i = 0; i< n; i++){
        char name = 'A' + i;
        for(int j =i+1; j>0; j--){
            cout << name <<" ";
            //num++;
            name -= 1;
        }
        cout << endl;
    }

    return 0;
}







// output :
// A 
// B A 
// C B A 
// D C B A  