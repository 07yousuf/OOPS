#include<bits/stdc++.h>
using namespace std;
class Rectangle{
      long length,width;
      public:
      Rectangle(long x, long y){
            length=x;
            width=y;
      }
      void getArea(){
            long result=length * width;
           cout<<"Area of Rectangle:\n"<<result;
      }
};
int main(){
      long a,b;
      cin>>a>>b;
      Rectangle send(a,b);
      send.getArea();
}