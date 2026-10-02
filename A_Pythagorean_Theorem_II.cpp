#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n, a, b, c, ans=0;
    cin>>n;

    for(int i=1;i*i<=n*n;i++){
        for(int j=1;j*j<=n*n;j++){
            int x=i*i+j*j;
            double y=sqrt(x);
            x=sqrt(x);
            if(x==y && x<=n)ans++;
        }
    }

    cout<<ans/2<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);

    sove();

    return 0;
}