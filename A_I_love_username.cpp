#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n, ans=0;
    cin>>n;

    int x;
    cin>>x;
    int ma=x, mi=x;

    for(int i=1, y;i<n;i++){
        cin>>y;

        if(y>ma){
            ma=y;
            ans++;
        }
        if(y<mi){
            mi=y;
            ans++;
        }
    }

    cout<<ans<<'\n';
    
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}