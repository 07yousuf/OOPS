#include<bits/stdc++.h>
using namespace std;
class sample{
      public:
      void over(int a,int b){
            int x= a + b;
            cout<<"Summation between this numbers: \n"<<x<<endl;
      }
      void over(int a, int b,int c){
            int x= (a + b) -c;
            cout<<"Substraction between this numbers: \n"<<x<<endl;
      }
      void over(int a,int b,int c,int d){
            int x= a*b*c*d;
            cout<<"multiplication between this numbers: \n"<<x<<endl;
            
      }
      void over(int a,int b,int c,int d,int e){
            if(c || d <= 0){
                  cout<<"Division can't allowed by zero(0)";
            }
            else{
            int x= (a*b*c) / (c*d);
            cout<<"Division between this numbers: \n"<<x<<endl;
            }
      }
};
int main(){
      int num1,num2,num3,num4,num5;
      cin>>num1>>num2>>num3>>num4;
      sample calculate;
      calculate.over(num1,num2);
      calculate.over(num1,num2,num3);
      calculate.over(num1,num2,num3,num4);
      calculate.over(num1,num2,num3,num4,num5);
      return 0;
}
