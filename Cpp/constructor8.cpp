#include<bits/stdc++.h>
class sample{
      public:
      sample(){
            std::cout<<"Constructor called"<<std::endl;
      }
};
int main(){
      std::cout<<"Hi"<<std::endl;
      // sample r1;

      //Dynamically allocation
      sample *r1 = new sample();
      std::cout<<"Hello"<<std::endl;
}