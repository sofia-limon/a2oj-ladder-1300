#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, ans=0;
    cin>>n;
    string s;
    cin>>s;

    for(int i=1;i<n;i++){
        if(s[i]==s[i-1])ans++;
    }

    cout<<ans<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    solve();
    return 0;
}