#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int reverse = 0;

    while (n>0){
        int l = n%10;
        reverse = reverse *10 + l;

        n = n/10;
    }

    cout << " the Reverse no is " << reverse ;


}


