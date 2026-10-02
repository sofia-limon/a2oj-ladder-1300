#include <bits/stdc++.h>

using namespace  std;

void sove(){
    int n, cnt0=0, pref=0;
    cin>>n;

    vector<int> v(n);

    int si=0;

    for(auto& u: v){
        cin>>u;
        if(u==0)cnt0++;     
    }

    for(int i=0;i<n;i++){
        if(v[i]==0)si=1;
        if(si && v[i]==0)cnt0--;
        if(si && v[i]==1 && cnt0>0){
            v[i]=0;
        }
        pref+=v[i];
    }

    if(si && pref==0){
        cout<<"Bob\n";
        return;
    }
    cout<<"Alice\n";
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    int t=1;
    cin>>t;
    while(t--)sove();
    return 0;
}