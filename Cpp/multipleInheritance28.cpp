#include<bits/stdc++.h>
using namespace std;
class animal{
      
      int weight;
      string color;
      public:
      void doginfo(int x,string y){
            weight = x;
            color = y;
      }
      void show(){
            cout<<weight<<endl<<color<<endl;
      }
};

class dog {
      public:
      string power;
      void doginfo1(string x){
            power=x;
      }
      string show1(){
            return power;
      }
};

class jermansheperd : public animal, public dog{
      public:
      string speed;
      void doginfo2(string x){
            speed = x;
      }
      string show2(){
            return speed;
      }
};

int main(){
      jermansheperd object1;
      object1.doginfo(40,"white");
      object1.show();
      object1.doginfo1("beast");
      cout<<object1.show1()<<endl;
      object1.doginfo2("40kmh");
      cout<<object1.show2()<<endl;
}