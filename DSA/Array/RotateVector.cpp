#include<iostream>
#include<vector>
using namespace std;

//BEST CODE TILL DATE, MUST GIVE A TRY!!
//THIS CODE ROTATES THE ARRAY BY 'K' TIMES!!!!

void display(vector<int>&v){
    for(int i=0;i<=v.size()-1;i++)
     cout<<v[i]<<" ";
cout<<endl;
}

void reversePart(int i,int j, vector<int>& v ){
    for( i, j=j ;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
return;
}
int main(){
vector <int> v;
v.push_back(5);
v.push_back(2);
v.push_back(6);
v.push_back(3);
v.push_back(5);
v.push_back(9);
v.push_back(7);
v.push_back(2);
v.push_back(3);
v.push_back(0);

cout<<("The Array is follows: ");
display(v);

cout<<("Give the value of K: ");
int k;
cin>>k;
int n;
n=v.size();
if(k>n) k%=n;

cout<<("Rotating the Array ")<<k<<(" times!!")<<endl;
int i=0,j=v.size()-1-k;
reversePart(i,j,v);
// display(v);

i=v.size()-k;
j=v.size()-1;

reversePart(i,j,v);
// display(v);


i=0;
reversePart(i,j,v);
cout<<("Ta-DA!! --> ");
display(v);


}