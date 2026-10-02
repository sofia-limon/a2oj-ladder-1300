#include <bits/stdc++.h>

using namespace std;

int const mod=1073741824;

void sove(){

    int a, b, c;
    cin>>a>>b>>c;

    int ma=a*b*c;    

    vector<int>d(ma+1,0);

    for(int i=1;i<=ma;i++){
        for(int j=i;j<=ma;j+=i){
            d[j]++;
        }
    }

    long long sum=0;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            int ij=(i*j)%mod;
            for(int k=1;k<=c;k++){
                sum+=d[ij*k];
                sum%=mod;
            }
        }
    }

    cout<<sum%mod<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}