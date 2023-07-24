//Print mirror image of right-angled triangle using '*'
//N - the size of the pattern.
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int space=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=space;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
        space--;
    }
    return 0;
}
