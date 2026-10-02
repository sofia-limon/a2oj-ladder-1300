#include <bits/stdc++.h>

using namespace std;

void sove(){

    int n, t;
    cin>>n>>t;

    string s;
    cin>>s;

    while(t--){
        for(int i=0;i<n-1;i++){
            if(s[i]=='B'&&s[i+1]=='G')swap(s[i], s[i+1]), i++;
        }//despues igualar
    }
    cout<<s<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}