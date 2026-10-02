#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n, ans=1;
    cin>>n;

    map<pair<int, int>, int> m;

    for(int i=0, x, y;i<n;i++){
        cin>>x>>y;
        m[{x, y}]++;
        ans=max(ans, m[{x, y}]);
    }

    cout<<ans<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}