#include <bits/stdc++.h>

using namespace std;

void sove(){
    string s;
    cin>>s;
    if(s.size()<=10){
        cout<<s<<'\n';
        return;
    }

    cout<<s[0]<<s.size()-2<<s[s.size()-1]<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    int t=1;
    cin>>t;
    while(t--)sove();
    return 0;
}