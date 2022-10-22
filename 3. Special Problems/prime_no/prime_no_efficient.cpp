#include <iostream>
using namespace std;

int main(){

    
    int n;
    cin >> n;

    if (n<=1){
        cout << "Enter a valid number greter than 1"<<endl;
        return 0;
    }

    if (n==2 || n==3)
    {
        cout << n << " is a prime no.";
        return 0;
    }

    if (n%2==0 || n%3==0 ){
        cout << n << " not a prime no.";
        return 0;
    }


    for (int i =5;i*i<n;i+=6){
        if (n%i==0 || n%(i+2)==0){
            cout << n << " not a prime no."; 
        }
        return 0;
    }

    cout << n << " is a prime no.";

    return 0;

}