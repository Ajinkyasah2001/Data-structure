#include <iostream>

using namespace std;


int main(){


    int n;
    cout << " Enter a number n : " <<endl;
    cin >> n;


    for (int i = 2; i*i < n; i++)
    {
        if (n%i==0){
            cout << "The number is not a prime number.";
            return 0;
        }

    }

    cout << "The number is prime no.";

    return 0;
}