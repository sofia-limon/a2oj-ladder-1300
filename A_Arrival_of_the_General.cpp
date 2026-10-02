#include <bits/stdc++.h>

using namespace  std;

void sove(){
    int n, posmi=-1, posma=-1, ma=-1, mi;
    cin>>n;

    vector<int> v(n);
    cin>>v[0];
    mi=v[0];
    posmi=0;
    ma=v[0];
    posma=0;
    for(int i=1;i<n;i++){
        cin>>v[i];
        if(v[i]>ma){
            posma=i;
            ma=v[i];
        }
        if(v[i]<=mi){
            posmi=i;
            mi=v[i];
        }
    }
    
    n--;

    int ans=n-posmi + posma;

    if(posma>posmi)ans--;


    cout<<ans<<'\n';

}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}