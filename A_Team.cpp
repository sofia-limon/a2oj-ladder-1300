#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n, sum=0, ans=0;
    cin>>n;
    
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<3;j++){
            int nose;
            cin>>nose;
            if(nose==1)sum++;
        }
        if(sum>1)ans++;
    }

    cout<<ans<<'\n';

}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}