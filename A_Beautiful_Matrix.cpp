#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n=5, posx=-1, posy=-1, ans=0;
    vector<vector<int>> v(5, vector<int> (5));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
            if(v[i][j]==1){
                posx=i;
                posy=j;
            }
        }
    }
    ans+= (abs(posy-2)) + (abs(posx-2));

    cout<<ans;
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}