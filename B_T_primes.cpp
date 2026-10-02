#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long p){
    if(p < 2) return false;
    if(p % 2 == 0) return p == 2;
    for(long long d = 3; d*d <= p; d += 2){
        if(p % d == 0) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while(n--){
        long long x;
        cin >> x;

        long long r = (long long)(sqrtl((long double)x) + 0.5L);

        if(r*r == x && isPrime(r)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
