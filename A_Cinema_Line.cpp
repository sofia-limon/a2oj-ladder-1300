#include <bits/stdc++.h>
#define ll long long

using namespace std;

void sove(){
    ll n, sum25=0, sum50=0;
    cin>>n;

    vector<ll> v(n);

    for(auto& u: v){
        cin>>u;
        if(u==25){
            sum25++;
            continue;
        }
        else {
            if(u==50){
                sum25--;
                if(sum25<0){
                    cout<<"NO\n";
                    return;
                }
                sum50++;
            }else{
                sum50--;
                sum25--;
                if(sum50<0 || sum25<0){
                    sum50++;
                    sum25-=2;
                    if(sum25<0){
                        cout<<"NO\n";
                        return;
                    }
                }
            }
        }
    }

    cout<<"YES\n";
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}