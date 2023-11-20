#include<bits/stdc++.h>
using namespace std;
class Complete{
      private:
      string firstname;
      string lastname;
      public:
      void initial(string fn, string ln){
            firstname = fn;
            lastname = ln;
      }
      Complete operator + (Complete obj){
            Complete temp;
            temp.firstname = obj.firstname;
            temp.lastname = obj.lastname;
            return temp;
      }
      void show(){
            cout<<firstname<<" "<<lastname;
      }
};
int main(){
      Complete sample;
      sample.initial("Abidul","Islam");
      sample.show();
}