#include<bits/stdc++.h>
using namespace std;
class W{
      public:
      void display(){
            cout<<"Call Me";
      }
};
class X: public W{

};
class Y: public W{

};
class Z: public X,public Y{

};
int main(){
      W object1;
      object1.display();
}