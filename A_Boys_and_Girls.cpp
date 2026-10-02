#include <bits/stdc++.h>

using namespace  std;

void sove(){
    int n, m;
    cin>>n>>m;
    int N=n+m;

    if(n>m){
        for(int i=0;i<N;i++){
            if(n>0 && i%2==0){
                cout<<'B';
                n--;
                continue;
            }
            if(n<=0 && i%2==0){
                cout<<'G';
                m--;
                continue;
            }
            if(m<=0 && i&1){
                cout<<'B';
                n--;
                continue;
            }
            if(m>0 && i&1){
                cout<<'G';
                m--;
                continue;
            }
        }
    }else{
        for(int i=0;i<N;i++){
            if(n>0 && i%2){
                cout<<'B';
                n--;
                continue;
            }
            if(n<=0 && i%2){
                cout<<'G';
                m--;
                continue;
            }
            if(m<=0 && i%2==0){
                cout<<'B';
                n--;
                continue;
            }
            if(m>0 && i%2==0){
                cout<<'G';
                m--;
                continue;
            }
        }
    }

    
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}