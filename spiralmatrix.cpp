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
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }       
        }
        int rowst=0,rowen=n-1,colst=0,colen=n-1;
        while(rowst<=rowen && colst<=colen){
            for(int i=colst;i<=colen;i++){
                cout<<a[rowst][i]<<" ";
            }
            rowst=rowst+1;
            for(int i=rowst;i<=rowen;i++){
                cout<<a[i][colen]<<" ";
            }
            colen=colen-1;
            if(rowst<=rowen){
                for(int i=colen;i>=colst;i--){
                    cout<<a[rowen][i]<<" ";
                }
                rowen=rowen-1;
            }
            if(colst<=colen){
                for(int i=rowen;i>=rowst;i--){
                    cout<<a[i][colst]<<" ";
                }
                colst=colst+1;
            }
        }
        cout<<endl;
    }        
    return 0;
}
