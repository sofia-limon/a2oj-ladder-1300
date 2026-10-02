#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, x=0;
    cin>>n;

    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[0]=='X'){
            if(s[1]&&s[2]=='+'){
                x++;
            }
            if(s[1]&&s[2]=='-'){
                x--;
            }
        }
        if(s[2]=='X'){
            if(s[0]&&s[1]=='+'){
                x++;
            }
            if(s[0]&&s[1]=='-'){
                x--;
            }
        }
    }

    cout<<x<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    solve();
    return 0;
}