#include <bits/stdc++.h>

using namespace std;

void sove(){

    int n;
    cin>>n;
    double sum=0;

    for(int i=0;i<n;i++){
        double x;
        cin>>x;
        sum+=x;
    }

    cout<<fixed<<setprecision(9)<<sum/n<<'\n';
}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}