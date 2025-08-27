#include<iostream>
#include<vector>
using namespace std;
//in this code we are going to break the -
// array into two parts and then reversing each separate-
//blocks then finally reversing the full array once again.
//THIS IS HOW WE GET ARRAY ROTATION AS FULL!!

void display(vector<int>&v){
    for(int i=0;i<=v.size()-1;i++)
     cout<<v[i]<<" ";
cout<<endl;
}
void reverseArr(int i,int j,vector<int>&v){
     while(i<j){
       int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
vector<int>v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(7);
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(0);
    v.push_back(2);
    
   cout<<"This is your array please tell me how many times you want ot rotate it My Lord!";
   cout<<endl; 
   display(v);
    int k,i,j;
    bool flag=false;
    cin>>k; //Let's check 'k' if its usable
    if(k>v.size()){flag = true;
         k%=v.size();}
    //Here we reverse first half!!
    i=0;j=v.size()-k-1;
    reverseArr(i,j,v);
    //display(v);

        //Here we reverse second half!!
        i=v.size()-k;
        j=v.size()-1;
        reverseArr(i,j,v);
        //display(v);
            //Here we reverse full Array!!
            i=0;
            j=v.size()-1;
            reverseArr(i,j,v);
if (flag == true) cout<<"Since rotation coefficient was greater than array size so, ";           
cout<<"Sir here's the "<<k<<" times rotated array";
cout<<endl;
display(v);

}