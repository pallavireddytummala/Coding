//Given an array of unique integer elements, print all the subsets of the given array in lexicographical order.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool checkBit(int a,int n){
    int ans=a>>n;
    if(ans%2!=0)
        return true;
    return false;
}
vector<vector<int>> Subset(int arr[],int n){
    vector<vector<int>> ans;
    int x=1<<n;
    for(int i=0;i<x;i++){
        vector<int> value;
        for(int j=0;j<n;j++){
            if(checkBit(i,j))
                value.push_back(arr[j]);
        }
        ans.push_back(value);
    }
    return ans;
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
        sort(arr,arr+n);
        vector<vector<int>> ans=Subset(arr,n);
        sort(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
