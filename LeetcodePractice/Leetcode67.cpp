#include<iostream>
#include<algorithm>
#include <string>
using namespace std;
string addBinary(string a, string b) {
    string d = "";
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        d.push_back((sum % 2) + '0'); 
        carry = sum / 2;                  
    }

    reverse(d.begin(), d.end());
    return d;
}

int main(){
    string s = "100";
    string t = "1";
    cout<<addBinary(s,t);
}