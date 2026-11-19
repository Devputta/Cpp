#include<iostream> 
using namespace std;

int main(){
    int n=14;
    bool isPrime = true;
    

    for(int i =2; i<=n-1; i++){ // i is divisible and also n is divisible so that y 2 to n-1
        if(n%i == 0){
        isPrime = false;    
        break;
        }
    }

    if(isPrime == true){
        cout <<n << " : Number Prime" << endl;
           
    }else{
        cout << n << " : Number NonPrime" << endl;
    }

  return 0;
}


// output :

// 11 : Number Prime

// 99 : Number Prime


// non Prime Number :232
  
