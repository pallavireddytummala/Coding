#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int gans=INT_MAX;
int sum(int arr[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}
int max1(int arr[],int n){
    int h=arr[0];
    for(int i=1;i<n;i++){
        if(h<arr[i])
            h=arr[i];
    }
    return h;
}
bool valid(int arr[],int n,int k,int mid){
    int s=0;
    for(int i=0;i<n;i++){
        if((s+arr[i])>mid){
            k--;
            s=0;
        }
        s+=arr[i];
    }
    return k>0;
}
int solve(int arr[],int n,int k){
    int l=max1(arr,n),h=sum(arr,n),ans=0;
    while(l<=h){
        int mid=(l+h)/2;
        if(valid(arr,n,k,mid)){
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solve(arr,n,k)<<endl;
 
    }
    return 0;
}
