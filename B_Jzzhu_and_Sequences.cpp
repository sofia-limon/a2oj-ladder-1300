#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod=1000000007;

ll m(ll a){
    a%=mod;
    if(a<0)a+=mod;
    return a;
}

void sove(){
    ll x, y, n, ans=0;
    cin>>x>>y>>n;

    vector<ll> v(6);

    v[1]=m(x), v[2]=m(y), v[3]=m(y-x);
    v[4]=m(-1*v[1]), v[5]=m(-1*v[2]), v[0]=m(-1*v[3]);

    ll fi1=v[(n-1)%6];
    ll fi2=v[(n+1)%6];
    
    ans=m(fi1+fi2);
    cout<<ans<<'\n';

}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}