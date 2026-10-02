#include <bits/stdc++.h>

using namespace std;

void sove(){
    string s, s2;
    cin>>s>>s2;

    for(int i=0;i<s.size();i++){
        if(s[i]!=s2[i]){
            cout<<1;
        }else cout<<0;
    }
}

int main(){
    cin.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}