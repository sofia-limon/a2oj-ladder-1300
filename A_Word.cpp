#include <bits/stdc++.h>

using namespace std;

void sove(){
    string s;
    cin>>s;
    int cntMayus=0, cntMin=0;

    for(int i=0;i<s.size();i++){
        if(s[i]-'a'<0){
            cntMayus++;
        }
        if(s[i]-'a'>=0){
            cntMin++;
        }
    }

    //cout<<cntMayus<<' '<<cntMin;

    if(cntMayus>cntMin){
        for(int i=0;i<s.size();i++){
            if(s[i]-'a'<0){
                cout<<s[i];
            }
            if(s[i]-'a'>=0){
                char nose=s[i]-32;
                cout<<nose;
            }
        }
    }
    if(cntMayus<cntMin){
        for(int i=0;i<s.size();i++){
            if(s[i]-'a'<0){
                char nose=s[i]+32;
                cout<<nose;
            }
            if(s[i]-'a'>=0){
                cout<<s[i];
            }
        }
    }
    if(cntMayus==cntMin){
        for(int i=0;i<s.size();i++){
            if(s[i]-'a'<0){
                char nose=s[i]+32;
                cout<<nose;
            }
            if(s[i]-'a'>=0){
                cout<<s[i];
            }
        }
    }
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}