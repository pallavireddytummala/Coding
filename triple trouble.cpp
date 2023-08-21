//Given an array of size 3X+1, where every element occurs three times, except one element, which occurs only once. Find the element that occurs only once.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool checkBit(int n,int i){
    int ans=n>>i;
    if(ans%2==0)
        return false;
    return true;
}
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
        int ans=0;
        for(int i=0;i<=30;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(checkBit(arr[j],i)){
                    cnt++;
                }
            }
            if(cnt%3!=0)
                ans+=(1<<i);
        }
        cout<<ans<<endl;
    }
       
    return 0;
}
