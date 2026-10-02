#include <bits/stdc++.h>
#define ll long long

using namespace  std;

ll const N = 2e5+5;
ll ans, k, n;
ll v[N];

int f(ll m){

    if(m==0)return 1;

    vector<ll> a(m+1, 0);
    int cnt=0;

    for(int i=1;i<=k;i++){
        if(v[i]<m){
            if(a[v[i]]==0)cnt++;
            a[v[i]]++;
        }
    }

    if(cnt==m)return 1;

    for(int i=k+1;i<=n;i++){
        if(v[i]<m){
            if(a[v[i]]==0)cnt++;
            a[v[i]]++;
        }

        ll ant=v[i-k];
        if(ant<m){
            a[ant]--;
            if(a[ant]==0)cnt--;
        }
        if(cnt==m)return 1;
    }

    return 0;
}

void BS(int l, int r){
    if(l>r)return;

    ll md = (l+r)/2;

    if(f(md)){
        ans=md;
        BS(md+1, r);
    }else BS(l, md-1);
}

void sove(){

    cin>>n>>k;
    ans=-1;

    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    BS(0, k-1);

    cout<<ans<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    int t=1;
    cin>>t;
    while(t--)sove();
    return 0;
}