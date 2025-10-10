#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
int MainBalance;
cin>>MainBalance;
int N;
cin>>N;

int CrrBalance = MainBalance;
int txnCount =0;
vector<string>CredOrDeb;
vector<int>TxnAmount;
vector<bool>TxnStatus;

vector<int>BalanceHistory;
BalanceHistory.push_back(CrrBalance);

for(int i=0;i<N;i++){
string Operatn;
cin>> Operatn;
    if(Operatn == "read"){
        cout<<CrrBalance<<endl;
    }
    else if(Operatn=="credit"){
        int amt;
        cin>> amt;
        CrrBalance+=amt;
        CredOrDeb.push_back("credit");
        TxnAmount.push_back(amt);
        TxnStatus.push_back(true);
        txnCount++;
    }
    else if(Operatn=="debit"){
        int amt;
        cin>>amt;
        if(CrrBalance-amt>=0){
            CrrBalance-=amt;
        CredOrDeb.push_back("debit");
        TxnAmount.push_back(amt);
        TxnStatus.push_back(true);
        txnCount++;
        }
    }
    else if(Operatn=="commit"){
     BalanceHistory.push_back(CrrBalance);
    for(int i=0;i<(int)TxnStatus.size();i++){
        TxnStatus[i]= false;
    }
    }
    else if(Operatn=="abort"){
        int x; 
        cin>>x;
        if(x>=1 && x<=txnCount){
            int p = x-1;
            if(TxnStatus[p]==true){
                if(CredOrDeb[p]=="credit"){
                CrrBalance-=TxnAmount[p];
            }
            else if(CredOrDeb[p]=="debit"){
                CrrBalance+=TxnAmount[p];
            }
            TxnStatus[p]= false;
            }
            
        }
    }
    else if(Operatn=="rollback"){
        int x;
        cin>>x;
        if(x>=0 && x<(int)BalanceHistory.size()){
            CrrBalance=BalanceHistory[x];
            for(int i=0;i<(int)TxnStatus.size();i++){
                TxnStatus[i]=false;
            }
        }
    }
} return 0;
}