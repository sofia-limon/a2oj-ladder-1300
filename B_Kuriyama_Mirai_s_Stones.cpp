#include <bits/stdc++.h>
#define ll long long

using namespace std;

void sove(){

    ll n;
    cin>>n;

    vector<ll> v(n), pref(n+1), pref2(n+1);

    for(auto& u: v)cin>>u;
    
    pref[0]=0;
    for(int i=1;i<=n;i++){
        pref[i]=pref[i-1]+v[i-1];
    }

    sort(v.begin(), v.end());

    pref2[0]=0;

    for(int i=1;i<=n;i++){
        pref2[i]=v[i-1]+pref2[i-1];
    }

    ll m;
    cin>>m;

    while(m--){
        ll ty, l, r;
        cin>>ty>>l>>r;

        if(ty==2){
            cout<<pref2[r]-pref2[l-1]<<'\n';
        }

        if(ty==1){
            cout<<pref[r]-pref[l-1]<<'\n';
        }
    }

}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();

    return 0;
}