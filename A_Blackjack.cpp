#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n, ans=0, ten=0;
    cin>>n;

    for(int i=1;i<=11;i++){
        if(10+i==n && i==10){
            ten++;
            continue;
        }
        if(10+i==n)ans++;
    }
    ans*=4;

    if(ten){
        ans+=15;
    }

    cout<<ans;
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}