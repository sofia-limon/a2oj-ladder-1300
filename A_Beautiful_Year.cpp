#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n, pq=10, pf=1, ante=0;
    cin>>n;
    
    int si=0;
    
    while(!si){
        n++;
        ante=0, pq=1, pf=1;
        set<int>ya;
        //int pq=10;

        for(int i=0;i<4;i++){
            pq*=10;
            int x=(n%pq-ante)/pf;
            pf*=10;
            ante+=x;
            ya.insert(x);//van a estar en orden
            //cout<<x<<' ';
        }

        //cout<<ya.size()<<' ';
        
        if(ya.size()>=4){
            si=1;
            cout<<n<<'\n';
            return;
        }
    }

}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}