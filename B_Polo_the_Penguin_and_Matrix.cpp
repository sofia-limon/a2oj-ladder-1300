#include <bits/stdc++.h>
#define ll long long

using namespace std;

int const N=2e5+5;
int ans=N, nm, d;
int a[N];

ll f(int x){
    ll res=0;
    for(int i=0;i<nm;i++){
        ll y=(x-a[i])/d;
        res+=abs(y);
    }
    return res;
}

void TS(int l, int r){
    if(l>r)return;

    int md1=l+(r-l)/3;
    int md2=r-(r-l)/3;
    ll x=f(a[md1]), y=f(a[md2]);

    if(x>y){
        ans=y;
        TS(md1+1, r);
    }
    if(x<y){
        ans=x;
        TS(l, md2-1);
    }
    if(x==y){
        ans=x;
        TS(md1+1, md2-1);
    }

}

void sove(){
    int n, m, mo;
    cin>>n>>m>>d;
    nm=n*m;

    cin>>a[0];

    mo=a[0]%d;

    for(int i=1;i<nm;i++){
        cin>>a[i];
        if(a[i]%d!=mo){
            cout<<"-1\n";
            return;
        }
    }
    
    sort(a, a+nm);

    /*for(int i=0;i<nm;i++){
        cout<<a[i]<<'\n';
    }*/

    TS(0, nm);

    cout<<ans<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}