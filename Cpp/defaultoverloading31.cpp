#include<bits/stdc++.h>
using namespace std;
class A{
      int x,y,z;
      public:
      int calcu(int a,int b,int c=8,int d=9){
            x=a;
            y=b;
            return x+y+c+d;
      }
      int calcu2(int a,int b,int c){
            x=a;
            y=b;
            z=c;
            return x+y-z;
      }
};
int main(){
      A object1;
      cout<<object1.calcu(10,12)<<endl;
      cout<<object1.calcu2(20,40,25)<<endl;
}