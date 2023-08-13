#include<bits/stdc++.h>
using namespace std;

      void overloading(int x, int y){
            cout<<x+y<<endl;
      }
      void overloading(double x, int y){
            cout<<x-y<<endl;
            
      }
      void overloading(int x, double y){
            cout<<x*y<<endl;
            
      }
      void overloading(double x, double y){
            cout<<x/y;
            
      }
      

int main(){

      overloading(5,10);
      overloading(2345.34,20);
      overloading(20,8765.95);
      overloading(5678.98765,234.8765);
}


