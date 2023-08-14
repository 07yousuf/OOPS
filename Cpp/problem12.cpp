#include<bits/stdc++.h>
using namespace std;

class TIME{
      int hours,min,sec;
      public:
      void setTIME(int a,int b,int c){
            hours=a;
            min=b;
            sec=c;
      }
      int getTIME(){
            return hours,min,sec;
      }
      void func(){
           cout<<hours<<endl<<min<<endl<<sec<<endl;
      }

};
int main(){
      TIME T1,T2;
      T1.setTIME(5,46,39);
      T2.setTIME(6,30,40);
      T1.func();
      cout<<"Second Output:\n";
      T2.func();
}