#include<iostream>
#include<climits>
using namespace std;
// DATED : 18-11-2025 : Jabalpur
// Leetcode 29 from Math section is wierdly simple. i got it in less than a minute.

int divide(int dividend, int divisor) {
    long long a = dividend;
    long long b = divisor;
    long long result = a / b;

    if (result > INT_MAX) return INT_MAX;
    if (result < INT_MIN) return INT_MIN;
    return result;
}
int main(){
    int dd  = 7;
    int dv = -3;

    cout<<divide(dd,dv);
}