#include <bits/stdc++.h>
#define ll long long

using namespace std;

void sove(){
    string s;
    cin>>s;

    ll cnt=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='4' || s[i]=='7'){
            cnt++;
        }
    }

    if(cnt==4 || cnt==7){
        cout<<"YES\n";
        return;
    }

    cout<<"NO\n";

}

int main(){
    int t=1;
    //cin>>t;
    while(t--)sove();
    return 0;
}