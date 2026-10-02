#include <bits/stdc++.h>

using namespace std;

int const N=1e3+5;

int v1[N], v2[N];

void sove(){
    string s1, s2, s3;
    cin>>s1>>s2>>s3;

    string nose=s1+s2;

    sort(nose.begin(), nose.end());
    sort(s3.begin(), s3.end());

    if(s3==nose){
        cout<<"YES\n";
        return;
    }

    cout<<"NO\n";
    
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}