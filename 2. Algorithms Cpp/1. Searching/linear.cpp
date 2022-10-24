#include <iostream>
using namespace std;

int linearSearch(int arr[],int f,int n){

    int attempt = 0;

    int index = -1;

    for (int i = 0; i < n; i++)
    {
        cout << "attempt no " << attempt <<endl;
        if (arr[i]==f)
        {
            return i;
        }
        attempt++;
         
    }
    return index;

}


int linearSearchEffective(int arr[],int f,int n){
    
    int index = -1;

    int left =0;
    int attempt =0;
    int  right = n-1;

    // cout << left << endl;

    while (left < right){
        cout << "Appempt no. " << attempt <<endl;

        if (arr[left]==f){
            return left;
        }
        if (arr[right]==f){
            return right ;
        }
        left++;
        right--;
        attempt++;
    }



    return index;
}


int main(){


    int arr[5] = {54,75,85,24,63};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n << endl;

    cout << linearSearchEffective(arr,45,n) <<endl;
    cout << linearSearchEffective(arr,5,n) <<endl;
    cout << linearSearchEffective(arr,24,n) <<endl;
    cout << linearSearch(arr,24,n) <<endl;


    return 0;
}