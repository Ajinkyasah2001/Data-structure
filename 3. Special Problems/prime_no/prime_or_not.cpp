#include <iostream>

#include <cmath>

using namespace std;

int main(){

    int n;
    cin >> n;
    int flag =0;
    for(int i=2;i<=sqrt(n);i++){
        if (n%2!=0){
            cout << "Not a Prime No.";
            flag = 1;
            break;
        }
    }
    if( flag==0) {
        cout << "Number is prime no.";
    }



}