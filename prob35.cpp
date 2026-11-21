#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int i;


    //top
    for(i = 0;i<n; i++){ // space
    for(int j = 0; j<n-i-1; j++){
        cout <<" ";
        

    }
    cout << "*";
    
    if(i !=0){
        for(int j = 0; j< 2*i-1; j++){
            cout << " ";
            
        }

        cout << "*";
    }
    

    cout << endl;

}
for(int i =0; i<n+(n-1); i++){
    cout<< "*" ;
}

return 0;

}