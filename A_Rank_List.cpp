#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n, k, ans=-1;
    cin>>n>>k;

    map<pair<int, int>, int> m;
    vector<pair<int, int>> v(n);

    for(int i=0, x, y;i<n;i++){
        cin>>x>>y;
        v[i]={x, y};
        m[{x, y}]++;
    }

    sort(v.begin(), v.end(), [](pair<int, int>& a, pair<int, int>& b){
        if(a.first != b.first) return a.first > b.first;
        return a.second < b.second;
    });
    
    k--;
    int pos = k;

    ans=m[v[pos]];

    cout<<ans<<'\n'
;
}

int  main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}