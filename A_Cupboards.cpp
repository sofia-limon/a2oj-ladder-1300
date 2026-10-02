#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n, c1=0, u1=0, c2=0, u2=0;
    cin>>n;

    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        if(x)u1++;
        if(!x)c1++;
        if(y)u2++;
        if(!y)c2++;
    }

    int ma1=max(c1, u1), ma2=max(c2, u2);

    int nose=(n-ma1);
    int nose2=(n-ma2);

    cout<<nose+nose2;
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}