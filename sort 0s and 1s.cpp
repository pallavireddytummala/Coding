//You are given an array of 0's and 1's. Sort the array in ascending order and print it.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int left=0,right=n-1;
         while (left <= right) {
            while (left <= right && arr[left] == 0)
                left++;
            while (left <= right && arr[right] == 1)
                right--;
            if (left <= right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
