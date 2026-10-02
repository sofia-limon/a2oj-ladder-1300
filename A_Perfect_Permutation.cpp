#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n;
    cin>>n;
    vector<int> v(n);

    if(n&1){
        cout<<-1<<'\n';
        return;
    }

    for(int i=1;i<=n;i++){
        if(i&1){
            cout<<i+1<<' ';
        }else{
            cout<<i-1<<' ';
        }
    }
    
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}