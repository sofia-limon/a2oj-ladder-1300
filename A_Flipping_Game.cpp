#include <bits/stdc++.h>

using namespace std;

void sove(){

    int n, ans=0, sum=0;
    cin>>n;

    vector<int> v(n), pref(n+1,0);

    for(auto& u: v){
        cin>>u;
        sum+=u;
    }

    if(sum==n){
        cout<<n-1<<'\n';
        return;
    }

    for(int i=1;i<=n;i++){
        pref[i]=v[i-1]+pref[i-1];
    }

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            int x = sum + j-i+1 - ((pref[j]-pref[i-1])*2);
            ans=max(x, ans);
        }
    }

    cout<<ans<<'\n';

}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);

    sove();

    return 0;
}