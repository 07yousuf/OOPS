#include<bits/stdc++.h>
using namespace std;
class Circle{
      double radius;
      public:
      void area(int r){
           double pie=3.1416;
           double result = pie*r*r;
           cout<<"Area of Circle:\n"<<result;
      }
};
int main(){
      int x;
      cin>>x;
      Circle send;
      send.area(x);

}