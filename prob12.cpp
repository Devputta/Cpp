#include<iostream> 
using namespace std;

int main(){
    int n=14;
    bool isPrime = true;
    

    for(int i =2; i*i <= n; i++){ // i * i <=n is the optima squareroot n == i * i
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
  
