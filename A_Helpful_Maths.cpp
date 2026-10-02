#include <bits/stdc++.h>

using namespace std;

void sove(){

    string s;
    cin>>s;

    sort(s.begin(), s.end());

    for(int i=0;i<s.size();i++){
        if(s[i]=='+')continue;
        if(s[i]!='+'&&i!=s.size()-1)cout<<s[i]<<'+';
        if(s[i]!='+'&&i==s.size()-1)cout<<s[i];
    }

}

int main(){
    cin.tie(0); cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}