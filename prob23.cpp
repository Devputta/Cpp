#include<iostream>
using namespace std;

int main(){
    int n =5;
   
    
    

    for(int i =0; i<n; i++){
         char name = 'A';
        for(int j =0; j<i+1; j++){
           
            cout << name << " ";
            name +=1;
            
            

        }
        
        cout << endl;
    }

    return 0;
}





// output :

// A 
// A B 
// A B C 
// A B C D 
// A B C D E  
