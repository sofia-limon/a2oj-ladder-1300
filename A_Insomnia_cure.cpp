#include <bits/stdc++.h>
using namespace std;

long long nose2(long long a, long long b){
    if (a == 0 || b == 0) return 0;
    return (a / std::gcd(a,b)) * b;
}

long long nose(long long D, long long k, long long l, long long m, long long n){

    long long S1 = D/k + D/l + D/m + D/n;

    long long kl = nose2(k,l), km = nose2(k,m), kn = nose2(k,n);
    long long lm = nose2(l,m), ln = nose2(l,n), mn = nose2(m,n);
    long long S2 = D/kl + D/km + D/kn + D/lm + D/ln + D/mn;

    auto lcm3 = [&](long long a, long long b, long long c){
        return nose2(nose2(a,b), c);
    };
    long long klm = lcm3(k,l,m), kln = lcm3(k,l,n);
    long long kmn = lcm3(k,m,n), lmn = lcm3(l,m,n);
    long long S3 = D/klm + D/kln + D/kmn + D/lmn;

    long long all = nose2(klm, n);
    long long S4 = D/all;

    return S1 - S2 + S3 - S4;
}

long long sove(){
    long long k,l,m,n,D;
    cin>>k>>l>>m>>n>>D;

    cout << nose(D,k,l,m,n) << "\n";
    long long ans = 0;
    for (long long i = 1; i <= D; ++i){
        if (i%k==0 || i%l==0 || i%m==0 || i%n==0) ++ans;
    }
    return ans;
}

int main(){
    cin.tie(0);cout.tie(0); ios::sync_with_stdio(0);
    sove();
    return 0;
}