#include <bits/stdc++.h>

using namespace std;

void sove(){
    vector<vector<int>> v(4, vector<int> (4));

    for(int i=0;i<4;i++){
        string s;
        cin>>s;
        for(int j=0;j<4;j++){
            if(s[j]=='#'){
                v[i][j]=1;
            }else v[i][j]=0;
        }
    }

    int l, d, side;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            l=v[i][j+1], d=v[i+1][j], side=v[i+1][j+1];
            int sum=l + d + side + v[i][j];
            if(sum==3 || sum==1 || sum==4 || sum==0){
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();

    return 0;
}