//You are given an array of integers. Find the sum of XOR of all pairs formed by the elements of the array.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool checkBit(long long int n,int i){
    long long int ans=n>>i;
    if((ans&1)!=0)
        return true;
    return false;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int ans=0;
        for(int i=0;i<30;i++){
            int set=0;
            for(int j=0;j<n;j++){
                if(checkBit(a[j],i))
                    set++;
            }
            ans=ans+((1ll<<i)*(set*(n-set)));
        }
        cout<<2*ans<<endl;
    }
    return 0;
}
