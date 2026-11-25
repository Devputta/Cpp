#include<iostream>
using namespace std;

int factN(int n){
    int factn = 1;
    for(int i = 1; i<=n; i++){
        factn *=i;
    }
    return factn;
}



int ncr(int n, int r){
    int fact_n = factN(n);
    int fact_r = factN(r);
    int fact_nmr = factN(n-r);

    return fact_n / (fact_r * fact_nmr);
}


int main(){

    cout << "NCR : " <<ncr(8, 2) << endl;


    return 0;

}







// output :

// NCR : 28

