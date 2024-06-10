// Tổng chẵn esum

#include <iostream>
#include <bits/stdc++.h>

#define boost ios_base:sync_with_stdio(0);
cin.tie(0);
#define file(f) if(fopen(f".inp", "r")) {freopen(f".INP","r", stdin); freopen(f',".OUT","w", stdout());}
#define int long long

using namespace std;

struct PT{
    int idx;
    int value;
}
a[10005];

bool CMP(PT& a, PT& b){
    return a.idx < b.idx;
}
bool CNP(PT&p, int value){
    return p.idx < value;
}

void Solve(){
    cin >> n >> k;
    for(i = 0 ; i <n ; i++){
        int x; cin >> x;
        cin >> a[i].idx >> a[i].value;
    }
    sort(a,a+n, CMP);
    int S = 0;
    if (S % 2 ==0){
        cout << C2(d[0]) + C2(d[1]) << "\n";
    }
    else
        cout << d[0] * d[1] << "\n";

}

signed main(){
    boost;
    file("ESUM");
    Solve();
    return 0;
}