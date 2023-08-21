//Given a number, reverse the bits in the binary representation (consider 32-bit unsigned data) of the number, and print the new number formed.
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
        long long int n;
        cin>>n;
        int num=n;
        int a[32]={0};
        for(int i=0;i<32;i++){
            int num1=num>>i;
            if(num1%2==1){
                a[i]=1;
            }
        }
        unsigned int ans=0;
        for(int i=0;i<32;i++){
            if(a[i]==1){
                ans=ans+(1<<(31-i));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
