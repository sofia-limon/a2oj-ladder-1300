#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n, m;
    cin>>n>>m;

    vector<int> v(n), suf(n+1, 0);
    map<int, int> mp;

    for(auto& u: v){
        cin>>u;
    }
    

    for(int i=n-1;i>=0;i--){
        if(mp[v[i]]>0){
            suf[i]=suf[i+1];
            continue;
        }
        mp[v[i]]++;
        suf[i]=suf[i+1]+1;
    }

    while(m--){
        int x;
        cin>>x;
        x--;
        cout<<suf[x]<<'\n';
    }

}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}