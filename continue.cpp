#include<iostream>
using namespace std;


int main(){
    int n=6;
    int sum = 0;

    for(int i =0; i<=n; i++){
        
        if(i == 2){            
            continue;   // it will skip any step here 2 is skiped 
            
        }
        sum += i;
    }

    cout << sum;

    return 0;
}



// output :

// 19