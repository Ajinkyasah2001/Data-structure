#include <iostream>
using namespace std;


int binarySearch_recursive(int arr[],int l, int r ,int f) {
    int index = -1;
    int mid = l + (r-l )/2;
    

    while(l<=r){

        // cout << l <<" r " << r << " mid " << mid <<endl;

        if (arr[mid]==f){
            return mid;
        }
        
        if (f < arr[mid]){
            return binarySearch_recursive(arr,l,mid-1,f);
        }
        if(f > arr[mid]){
            return binarySearch_recursive(arr,mid+1,r,f);
        }

    }

    return index;
}


int binarySearch_loops(int arr[] ,int f,int n) {
    int index = -1;
    int l = 0;
    int r = n-1;
    while(l<=r){
        int mid = l + (r-l )/2;

        if (arr[mid]==f){
            return mid;
        }
        
        if (f < arr[mid]){
            r = mid -1;
            // return binarySearch(arr,l,mid-1,f);
        }
        if(f > arr[mid]){
            l = mid+1 ;
            // return binarySearch(arr,mid+1,r,f);
        }

    }

    return index;
}








int main(){

    int n = 10;
    int arr[n] = {12,32,37,43,48,57,256,456,723,999};

    cout << binarySearch_recursive(arr,0,n-1,103) << endl;
    cout << binarySearch_recursive(arr,0,n-1,36) << endl;
    cout << binarySearch_recursive(arr,0,n-1,256) << endl;

    cout << "Binary search using loops...." << endl;

    cout << binarySearch_loops(arr,103,n) << endl;
    cout << binarySearch_loops(arr,36,n) << endl;
    cout << binarySearch_loops(arr,256,n) << endl;




    return 0;
}