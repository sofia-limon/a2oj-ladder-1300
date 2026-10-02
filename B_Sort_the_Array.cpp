#include <bits/stdc++.h>
#define ll long long

using namespace std;

void sove(){
    ll n;
    cin>>n;

    vector<ll> v(n+2, 0);

    for(int i=1;i<n+1;i++){
        cin>>v[i];
    }

    int l=-1, r=-1, si=0, cnt=0, no=0;

    for(int i=2;i<n+1;i++){ 
        if(v[i]<v[i-1]){
            l=i-1;
            r=i;
            int j=i+1;
            int k=i;
            while(j<=n && v[j]<v[k]){
                r=j;
                k++; j++;
            }
            if(v[l-1]<v[r] && (v[l]<v[r+1] || r==n))si=1, cnt++, no++;
            else si=0, no++;
            i=k+1;
        }
        if(i>n)break;
    }

    if(no==0){
        cout<<"yes\n";
        cout<<1<<' '<<1<<'\n';
        return;
    }

    if(si==1 && cnt==1){
        cout<<"yes\n";
        cout<<l<<' '<<r;
        return;
    }

    cout<<"no\n";
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}
