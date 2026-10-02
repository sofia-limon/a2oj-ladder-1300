#include <bits/stdc++.h>

using namespace std;

void sove(){
    string s;
    cin>>s;

    if(s[0]-'a'>=0){
        char nose= s[0]-32;
        s[0]=nose;
    }
    cout<<s<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    int t=1;
    sove();
    return 0;
}