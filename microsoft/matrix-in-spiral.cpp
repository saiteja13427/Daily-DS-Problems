#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }   
    }
    int i=0, j=0, k;
    while(i<n && j<m){
        for(k=j; k<m; ++k){
            cout<<a[i][k]<<" ";
        }
        i++;
        for(k=i; k<n; ++k){
            cout<<a[k][m-1]<<" ";
        }
        m--;
        if(i<n){
            for(k=m-1; k>=j; --k){
                cout<<a[n-1][k]<<" ";
            }
            n--;
        }
        if(j<m){
            for(k=n-1; k>=i; --k){
                cout<<a[k][j]<<" ";
            }
            j++;
        }

    }
}