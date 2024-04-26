#include <iostream>
#include<bits/stdc++.h>

#define inp "input.inp"
using namespace std;

int main()
{
    freopen(inp, "r", stdin);
    //Cau 1
    string ndung="", line="";
    cin.ignore(); //Xoa bo nho dem, neu truoc do khong dung len cin thi khong can
    while (getline(cin, line)) {
        ndung += line+ '\n';
    }
    ndung.pop_back();
    cout<<ndung;
    return 0;
}