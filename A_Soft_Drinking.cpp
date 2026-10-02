#include <bits/stdc++.h>

using namespace std;

void sove(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int nose=k*l/nl;
    int limes=c*d;
    int pan= p/np;

    int nose3= min({nose, limes, pan});

    cout<<(nose3)/n<<'\n';

}

int main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    sove();
    return 0;
}