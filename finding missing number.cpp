//Given an array of size N, it contains all the numbers from 1 to N+1 inclusive, except one number. You have to find the missing number.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int arr[n];
        int sum1=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum1=sum1+arr[i];
        }
        int sum=((n+1)*(n+2))/2;
        cout<<sum-sum1<<endl;
    }
    return 0;
}
