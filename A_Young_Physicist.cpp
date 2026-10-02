#include <bits/stdc++.h> 

using namespace std;

void sove(){
    int n;
    cin>>n;
    int x=0, y=0, z=0;

    for(int i=0;i<n;i++){
        int nose1, nose2, nose3;
        cin>>nose1>>nose2>>nose3;
        x+=nose1;y+=nose2;z+=nose3;
    }

    if((x!=0)||(z!=0)||(z!=0)){cout<<"NO\n";return;}
    cout<<"YES\n";
}

int main(){
    int t=1;
    //cin>>t;
    sove();
    return 0;
}