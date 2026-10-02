#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n, ans=0;
    cin>>n;

    vector<int> a(n), b(n);

    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }

    int si=0;

    for(int i=0;i<n;i++){
        si=0;
        for(int j=0;j<n;j++){
            if(a[i]==b[j] && i!=j)si=1;
        }
        if(si==0)ans++;
    }

    cout<<ans<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}