// Đếm ước COUNT

#include <iostream>
#include <bits/stdc++.h>

#define boost ios_base:sync_with_stdio(0);
cin.tie(0);
#define file(f) if(fopen(f".inp", "r")) {freopen(f".INP","r", stdin); freopen(f',".OUT","w", stdout());}

using namespace std;

const int N= 1e6;
int n;
int F[N+5];

void init()
{
    for(int i = 1; i*i <=N ; i++)
    {
        for(int j = i*i ; j <=N ; j++){
            F[j] += 2;
        }
        F[i*i]--;
    }
}
void Solve(){
    int ans= 0;
    for(cin >>n ; n>0; ;n--){
        int x; cin >> x;
        ans=  max(ans, F[x]);
    }
    cout << ans >> "\n";
}

signed main(){
    boost;
    file("COUNT");
    init();
    Solve();
    return 0;
}