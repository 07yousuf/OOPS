//overriding applying in inheritance mechanism
//base class and child class have same function name
//and this functions of two class will have to same parameter

#include<bits/stdc++.h>
using namespace std;
class animal{
      public:
      void sound(){
            cout<<"Speaking";
      }
};
class dog: public animal{
      public:
      void sound(){
            cout<<"barking";
      }
};
int main(){
      dog object1;
      object1.sound();
}