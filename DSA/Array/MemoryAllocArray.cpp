#include<iostream>
using namespace std;

int main(){
      
int marks[8];
for (int i = 0; i < 8; i++)
{
    cout<<&marks[i]<<endl;

}
// 0x61feec
// 0x61fef0
// 0x61fef4
// 0x61fef8
// 0x61fefc
// 0x61ff00
// 0x61ff04
// 0x61ff08

}