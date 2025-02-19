#include <iostream>
using namespace std;
int main(){
     
int arr[]={4,2,1,6,7,9};

int *ptr=arr;
int size= sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i<size; i++)
{
   cout<<i[arr]<<" ";
}

cout<<endl;


for (int i = 0; i<size; i++)
{
   cout<<i[ptr]<<" ";
}

cout<<endl;
for (int i = 0; i<size; i++)
{
   cout<<*ptr<<" ";
   ptr++;
}
ptr=arr;
cout<<endl;

for (int i = 0; i<size; i++)
{
   cout<<ptr[i]<<" ";
}
}