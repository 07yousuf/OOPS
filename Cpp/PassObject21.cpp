#include<bits/stdc++.h>
using namespace std;
class sample{
      int x,y;

      public:
      sample(int a,int b){
            x=a;
            y=b;
      }
      int get(){
            return x*y;
      }
      void SQRT(sample obj){
            int result=obj.get() * obj.get();
            cout<<result<<endl;
      }
};
int main(){
      int num1,num2,num3,num4;
      cin>>num1>>num2>>num3>>num4;
      sample send1(num1,num3),send2(num2,num4);
      send1.SQRT(send1);
      send1.SQRT(send2);

      

}