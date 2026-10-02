#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n, ans=0, ans2=0;
    cin>>n;

    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        ans-=x;
        ans+=y;
        ans2=max(ans, ans2);
    }

    cout<<ans2<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}