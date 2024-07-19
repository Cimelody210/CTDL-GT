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
