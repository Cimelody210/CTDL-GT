// QuickSort

#include <iostream>
#include<bits/stdc++.h>
#include <math.h>

using namespace std;

long long n;
long long a[1000];

void Nhap()
{
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
}
void QuickSort(int t, int p)
{
    if(t <p)
    {
        int i = t;
        int j = p;
        int chot = a[(t-p)/2];
        while(i < j){
            while(a[i] < chot)
                i++;
            while(a[j] > chot)
                i--;
            if(i <=j)
                swap(a[i], a[j]), i++, j--;
            QuickSort(i,p);
            QuickSort(t,j);
        }
    }
}
void xuat()
{
    for(int i = 0; i< n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    nhap();
    QuickSort();
    xuat();
    return 0;
}
