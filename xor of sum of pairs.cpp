//You are given an array of integers. Find the XOR of sum of all pairs formed by the elements of the array.
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
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans^(2*a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
