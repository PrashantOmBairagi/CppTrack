#include<iostream>
using namespace std;
//DATED: 01-12-2025 : Jabalpur : Leetcode258 EASY
//Solved this beautiful question to sum digits untill they becomes once digit. It is also used to find Zodiac number in horoscope field.

    int summ(int num, int sum){
        if(num==0) return sum;
        sum += num%10;
        return summ (num/10,sum);
    }

    int addDigits(int num){
        if(num<10) return num;
        num = summ (num,0);
        while(num>9){
           num = summ (num,0);
        }
        return num;
    }

int main(){
    int num = 17;
    cout<<addDigits(num);
}