#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i+1; j++){
			cout<<j<<" ";
		}
        int star = 2*i-2;
        for(int k=1;k<star;k++){
            cout<<"*"<<" ";
        }
		
		cout<<endl;
	}
}