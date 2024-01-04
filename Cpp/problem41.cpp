#include<bits/stdc++.h>
using namespace std;
class Bank_Account{
    public:
    int account_number,balance_account;
    string name_depositor,type_account;
    void initial(string a,int b,string c,int d){
        name_depositor = a;
        account_number =b;
        type_account =c;
        balance_account =d;
    }
    void show(){
        cout<<name_depositor<<account_number<<type_account<<balance_account<<endl;
    }

};
int main(){
    Bank_Account call;
    call.initial("Yousuf",631,"Business",50000);
    call.show();
}