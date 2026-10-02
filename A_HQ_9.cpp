#include <bits/stdc++.h>

using namespace std;

void sove(){
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            cout<<"YES\n"; return;
        }
    }

    cout<<"NO";
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}