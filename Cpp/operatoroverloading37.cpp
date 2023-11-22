#include<bits/stdc++.h>
using namespace std;
class Rectangle{
      int length,width;
      public:
      Rectangle(int l=5,int w=5){
            length = l;
            width = w;
      }
      
      Rectangle operator ++ (){
            length++;
      }
      Rectangle operator --(int){
            width--;
            
      }
      void showarea(){
            cout<<length;
      }
      void showarea2(){
            cout<<width;
      }
};
int main(){
      Rectangle r1,r2;
      ++r1;
      r2--;
      r1.showarea();
      r2.showarea2();
}
