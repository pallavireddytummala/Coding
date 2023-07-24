//You are given an array of N elements. All elements of the array are in range 1 to N-2. All elements occur once except two numbers, which occur twice. Your task is to find the two repeating numbers.
#include <iostream>
using namespace std;
int findPos(long long n){
    for(int i=0;i<64;i++){
        if((n>>i)%2==1)
          return i;
    return 64;
}
bool checkbit(long long int n,int i){
    long long int ans=n>>i;
    if((ans&1)!=0)
        return true;
    return false;
}
void solve(long long a[],long long n){
    long long ans=0;
    for(int i=0;i<n;i++)
        ans=ans^a[i];
    for(int i=1;i<n-1;i++)
        ans=ans^i;
    int pos=findPos(ans);
    long long set=0,unset=0;
    for(int i=0;i<n;i++){
        if(checkbit(a[i],pos))
            set^=a[i];
        else
            unset^=a[i];
    }
    for(int i=1;i<n-1;i++){
        if(checkbit(i,pos))
            set^=i;
        else
            unset^=i;
    }
    if(set>unset)
        cout<<unset<<" "<<set;
    else
        cout<<set<<" "<<unset;
    cout<<endl;
}
int main() {
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    solve(a,n);
    return 0;
}
