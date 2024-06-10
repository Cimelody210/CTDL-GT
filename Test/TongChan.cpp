// Tổng chẵn esum

#include <iostream>
#include <bits/stdc++.h>

#define boost ios_base:sync_with_stdio(0);
cin.tie(0);
#define file(f) if(fopen(f".inp", "r")) {freopen(f".INP","r", stdin); freopen(f',".OUT","w", stdout());}
#define int long long

using namespace std;

const int N= 1e6;
int n;
int d[2];

int C2(int n){
    return n * (n -1)/2;
}

void Solve(){
    cin >> n;
    for(i =1 ; i <=n ; i++){
        int x; cin >> x;
        S+=x ;
        d[x% 2]++;
    }
    for(i =1 ; i <=n ; i++){
        F[i + 1] = F[i] * a[i].value;
    }
    if (S % 2 ==0){
        cout << C2(d[0]) + C2(d[1]) << "\n";
    }
    int S = 0;
    else
        cout << d[0] * d[1] << "\n";

}

signed main(){
    boost;
    file("ESUM");
    Solve();
    return 0;
}