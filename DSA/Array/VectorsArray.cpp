#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int>v;


cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
v.push_back(6);
v.push_back(1);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

v.push_back(6);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

v.push_back(3);

cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}

}