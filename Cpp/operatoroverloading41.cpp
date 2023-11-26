#include<bits/stdc++.h>
using namespace std;
class Myclass{
      private:
      int u,v;
      public:
      Myclass(int a=0,int b=0){
            u = a;
            v = b;
      }
      Myclass operator --(int){//put int datatype parameter because postfix called
            u--;
            v--;
      }
      void show(){
            cout<<"After decrement: \n"<<u<<" "<<v<<endl;
      }

};
int main(){
      Myclass obj(97,109);
      obj--;
      obj.show();
}