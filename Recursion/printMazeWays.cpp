#include<iostream>
using namespace std;
void printMaze(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec) {
        cout<<s<<endl;
        return;
    }
    printMaze(sr,sc+1,er,ec,s+'R');
    printMaze(sr+1,sc,er,ec,s+'D');
    return;

}
int main(){
    printMaze(0,0,4,4,"");
}