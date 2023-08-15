#include<bits/stdc++.h>
using namespace std;
class test{
      int x=5;
      public:
      test(){
            cout<<"Constructor called\n";
            cout<<5<<endl;
      }
      ~test(){
            cout<<"Destructor called\n";
      }
};
int main(){
      test o;
      cout<<"Hi\n";
      test ob;
      test ob1;
      test ob2;
}