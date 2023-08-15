#include<bits/stdc++.h>
using namespace std;
class summation{
      long number1,number2;
      public:
      summation(long x, long y){
            number1=x;
            number2=y;
            long result=number1 + number2;
           cout<<"Summation between them:\n"<<result;
      }
};
int main(){
      long a,b;
      cin>>a>>b;
      summation send(a,b);
}