#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n, cnta=0, cntb=0;
    cin>>n;

    vector<int> a(n), b(n);

    int si=0;

    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        cnta+=a[i];
        cntb+=b[i];
        if(a[i]&1 && b[i]%2==0)si=1;
        if(b[i]&1 && a[i]%2==0)si=1;
    }

    if(cnta&1 && cntb&1){
        if(si){
            cout<<1<<'\n';
            return;
        }
        else{
            cout<<"-1\n";
            return;
        }
    }
    if(cnta%2==0 && cntb%2==0){
        cout<<0<<'\n';
        return;
    }
    if(cnta&1 && cntb%2==0){
        cout<<"-1\n";
        return;
    }
    if(cntb&1 && cnta%2==0){
        cout<<"-1\n";
        return;
    }
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}