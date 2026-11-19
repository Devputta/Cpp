#include<iostream>
using namespace std;

int main(){
    int n;
    int sum =0;
    cout << "Enter the nuber for N :" ;
    cin >> n;

    for(int i =1; i<=n; i++){
        if(i%3 == 0){
            sum += i;
            cout << i << " ";
        }
    }

    cout << "\nThe total sum :" << sum;
    
    
    return 0;
}




// output :
// Enter the nuber for N :10
// 3 6 9 
// The total sum :18