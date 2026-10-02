#include <bits/stdc++.h>

using namespace std;

/*
else{
    ans[i][j]^=1;
}
*/

int nx[4]={1, 0, 0, -1};
int ny[4]={0, -1, 1, 0};

void sove(){
    int n=3;

    vector<vector<int>> ans(n, vector<int>(n, 1)), v(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]&1){
                ans[i][j]^=1;
            }

            for(int k=0;k<4;k++){
                int x=i+nx[k], y= j+ny[k]; 
                if(x<0 || x>=n || y<0 || y>=n)continue;
                if(v[i][j]&1){
                    ans[x][y]^=1;
                }
            }
        }
    }

    for(auto u: ans){
        for(auto y: u){
            cout<<y;
        }
        cout<<'\n';
    }
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}