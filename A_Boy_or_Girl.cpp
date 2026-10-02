#include <bits/stdc++.h>

using namespace std;

void sove(){
    string s;
    cin>>s;
    set<char> f;

    for(auto& u: s){
        f.insert(u);
    }

    if(f.size()&1){
        cout<<"IGNORE HIM!\n";
    }else{
        cout<<"CHAT WITH HER!\n";
    }
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}