#include <iostream>
#include <math.h>
#include <string.h>
#include <FatReader.h>
#include <avg/prmspace.h>
#include <FlexiTimer.h>
#include <CapacitiveSensor.h>

#include "Charlie.h"

#define long long ll;

using namespace std;
FatVolume volume;
Charlie ch1 = charliel(3,0);
Servo sv1;
CapacitiveSensor cs1 = CapasitoveSensor(3,4);


void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(memset));
    for(int p =2; p*p <=n; p++)
    {
        if(prime[p]== true){
            for(int i =p*p; i<=n; i+=p){
                prime[i] = false;
            }
        }
    }
}
// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
// Hàm kiểm tra số siêu nguyên tố
bool isSuperPrime(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (!isPrime(digit)) {
            return false;
        }
        n /= 10;
    }
    return true;
}

// Hàm tìm và in ra các số siêu nguyên tố trong khoảng [start, end]
void findSuperPrimes(int start, int end) {
    cout << "Cac so sieu nguyen to trong khoang [" << start << ", " << end << "] la:\n";
    for (int i = start; i <= end; ++i) {
        if (isPrime(i) && isSuperPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}
// Hàm tìm số nguồn nhỏ nhất
long long find_smallest_source(long long M) {
    long long smallest_source = M; 
    for (long long N = max(1LL, M - 162); N < M; N++) {
        if (N + sum_of_digits(N) == M) {
            smallest_source = N;
            break;
        }
    }
    return smallest_source;
}
int main()
{
    Serial.begin(100);
    delay(2000);
    cout << "Welcome to the page " << endl ;
    return 0;
}
