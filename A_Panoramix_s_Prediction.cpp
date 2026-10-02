#include <bits/stdc++.h>

using namespace std;

vector<int> primos;

int vis[51];

void prime(){
    primos.push_back(1);
    vis[1]=1;
    for(int i=2;i<51;i++){
        if(!vis[i]){
            primos.push_back(i);
            for(int j=i;j<51;j+=i){
                vis[j]=1;
            }
        }
    }
}

void sove(){
    int n, m, sig=-1;
    cin>>n>>m;

    for(int i=0;i<primos.size();i++){
        if(primos[i]==n){
            sig=primos[i+1];
        }
    }

    if(sig==m){
        cout<<"YES\n";
        return;
    }

    cout<<"NO\n";
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    prime();
    sove();
    return 0;
}