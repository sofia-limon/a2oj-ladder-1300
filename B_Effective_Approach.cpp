#include <bits/stdc++.h>
#define ll long long

using namespace std;

void sove(){
    ll n;
    cin>>n;
    vector<ll> v(n+1);

    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        v[x]=i;
    }

    ll m, va=0, an=0;
    cin>>m;

    vector<ll> v2(m);

    for(int i=0;i<m;i++){
        cin>>v2[i];
        va+=v[v2[i]];
        an+=(n-v[v2[i]])+1;
    }

    cout<<va<<' '<<an<<'\n';

}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}