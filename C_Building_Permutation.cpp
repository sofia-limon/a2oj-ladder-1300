#include <bits/stdc++.h>
#define ll long long

using namespace std;

void sove(){
    ll n, ans=0;
    cin>>n;

    vector<int> v(n);

    for(auto& u:v)cin>>u;

    sort(v.begin(), v.end());

    for(ll i=1;i<=n;i++){
        ans+=abs(i-v[i-1]);
    }

    cout<<ans<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);

    sove();
    return 0;
}