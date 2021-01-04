#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int search;
    cin>>search;
    int x=0,y=m-1;
    while(a[x][y]!=search){
        if(search < a[x][y]){
            y--;
        }
        else if(a[x][y] < search){
            x++;
        }
    }
    cout<<x<<" "<<y<<endl;
}   