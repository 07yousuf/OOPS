#include<bits/stdc++.h>
using namespace std;
class human{
      public:
      float height;
      int weight;
      void setinfo1(float x,int y){
            height = x;
            weight = y;
      }
      void print1(){
            cout<<height<<endl<<weight<<endl;
      }
};

class male: public human{
      public:
      string skintone;
      void setinfo2(string s){
            skintone = s;
      }
      void print2(){
            cout<<skintone<<endl;
      }
};

int main (){
      male object1;
      object1.setinfo1(5.6,52);
      object1.print1();
      object1.setinfo2("Black");
      object1.print2();
}