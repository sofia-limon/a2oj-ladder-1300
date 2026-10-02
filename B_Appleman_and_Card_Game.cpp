#include <bits/stdc++.h>
#define ll long long

using namespace std;

void sove(){
    ll n, k, ans=0;
    cin>>n>>k;

    vector<ll> v(250, 0);

    string s;
    cin>>s;

    for(ll i=0;i<n;i++){
        v[s[i]]++;
    }

    sort(v.rbegin(), v.rend());

    ll k2=k;

    for(auto& u: v){
        if(k2<=0)break;
        ans+=min(u, k2)*(min(k2, u));
        k2-=min(k2, u);
    }

    cout<<ans<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}