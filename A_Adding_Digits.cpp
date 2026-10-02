#include <bits/stdc++.h>
#define ll long long

using namespace std;


void sove(){
    ll a, b, n, cnt=0, ans, n2;
    cin>>a>>b>>n;
    n2=n;

    ll d=10;
    ans=a;
    
    int si=0;
    ans*=d;
    for(int i=0;i<10;i++){
        if((ans+i)%b==0){
            si=1;
            ans+=i;
            break;
        }
    }

    if(si){
        cout<<ans;
        for(int i=0;i<n-1;i++){
            cout<<0;
        }
        return;
    }

    cout<<"-1\n";

}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}