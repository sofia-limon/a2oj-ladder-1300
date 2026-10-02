#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n, ans=0;
    cin>>n;

    int a, b, c;
    cin>>a>>b>>c;

    int i=0, j=0, k=0;

    for(i=0;i<=n;i++){
        int mula=a*i;
        if(mula>n)break;
        for(j=0;j<=n;j++){
            int mulb=mula + (b*j);
            int k = n-mulb;
            if(k>=0 && k%c==0){
                ans=max(ans, i+j+k/c);
            }
        }
    }

    cout<<ans<<'\n';
}

int main(){
    cin.tie(0);ios_base::sync_with_stdio(0);

    sove();

    return 0;
}