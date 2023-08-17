#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<limits.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int t;
    cin>>t;
    while(t--){
      int k;
      cin>>k;
      int low=0,high=n-1,mid;
      int ans=INT_MIN;
      while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]<=k){
            ans=arr[mid];
            low=mid+1;
        }
        else{
            high=mid-1;
        }
      }
      cout<<ans<<endl;
    }
    return 0;
}
