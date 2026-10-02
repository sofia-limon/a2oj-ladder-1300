#include <bits/stdc++.h>

using namespace std;

void sove(){
    string s;
    cin>>s;
    int n=s.size();

    int i=0;

    /*if(s[0]=='.'){
        cout<<0, i++;
    }*/

    for(;i<n;i++){
        if(s[i]=='.'){
            cout<<0;
        }
        if(s[i]=='-'&& s[i+1]=='-'){
            cout<<2;
            i++;
            continue;
        }
        if(s[i]=='-'&&s[i+1]=='.'){
            cout<<1; i++;
            continue;
        }
    }

}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}