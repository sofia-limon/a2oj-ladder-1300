#include <bits/stdc++.h>
using namespace std;

void sove(){
    int n;
    cin>>n;

    map<int, vector<int>> m;

    for(int i=1, x;i<=2*n;i++){
        cin>>x;
        m[x].push_back(i);
    }

    for(auto [u, v]: m){
        if(v.size()&1){
            cout<<"-1\n";
            return;
        }
    }

    for(auto [u, v]: m){
        for(int i=1;i<v.size();i+=2){
            cout<<v[i]<<' '<<v[i-1]<<'\n';
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    sove();

    return 0;
}