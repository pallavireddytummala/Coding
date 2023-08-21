//Given a number N, find the number of bits that are set to 1 in its binary representation.
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
        int cnt=0;
        while(n!=0){
            n=n&(n-1);
            cnt++;
        }
        cout<<cnt<<endl;   
    }
    return 0;
}
