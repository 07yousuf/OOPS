#include<bits/stdc++.h>
using namespace std;
class triangle{
      double height,base;
      public:
      triangle(double x,double y){
            height = x;
            base = y;
      }
      void display(){
            cout<<"Triangle's height & base:\n";
            cout<<height<<endl<<base<<endl;
      }
      void area(){
            cout<<"The area of Triangle: \n";
            double result = 0.5 * height * base;
            cout<<result<<endl;
      }
};
int main(){
      double num1,num2;
      cin>>num1>>num2;

      triangle send(num1,num2);
      send.display();
      send.area();


}