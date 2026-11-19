#include<iostream>
using namespace std;

int main(){
    int n;
    int mul =1;
    cout << "Enter the nuber for N :" ;
    cin >> n;

    for(int i =1; i<=n; i++){
            mul *= i;
            cout << i << " ";
        
    }

    cout << "\nThe total Multiple of N :" << mul;
    
    
    return 0;
}




// output :
// Enter the nuber for N :10
// 3 6 9 
// The total sum :18