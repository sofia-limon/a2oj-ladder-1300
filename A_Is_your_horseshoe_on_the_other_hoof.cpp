#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n=4;
    set<int> s;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s.insert(x);
    }
    int ans=n-s.size();
    cout<<ans<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}