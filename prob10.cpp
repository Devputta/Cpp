#include<iostream> // not possible 
using namespace std;

int main(){
    int n=232;
    

    for(int i =2; i<=n-1; i++){ // i is divisible and also n is divisible so that y 2 to n-1
        if(n%i == 0){
            cout << "non Prime Number :" << n <<endl;
            break;
        }
    cout <<n << " : Number Prime" << endl;
    break;    // once its prints then no need to check again
           
    }

  return 0;
}


// output :

// 11 : Number Prime

// 99 : Number Prime


// non Prime Number :232
  
