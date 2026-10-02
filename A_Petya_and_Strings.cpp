#include <bits/stdc++.h>

using namespace std;

void sove(){

    string s1, s2;
    cin>>s1>>s2;

    for(int i=0;i<s1.size();i++){
        int x=s1[i], y=s2[i];
        if(x<97)s1[i]+=('a'-'A');
        if(y<97)s2[i]+=('a'-'A');
    }

    if(s2>s1){
        cout<<"-1\n";
        return;
    }
    if(s2<s1){
        cout<<"1\n";
        return;
    }
    cout<<"0\n";
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);

    sove();

    return 0;
}