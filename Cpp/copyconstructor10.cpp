#include<bits/stdc++.h>
class student{
      int id,age;
      public:
      student(int x,int y){
            std::cout<<id<<std::endl;
            std::cout<<age<<std::endl;
      }
      student(student &per){
            id=per.id;
            age=per.age;
            std::cout<<id<<std::endl;
            std::cout<<age<<std::endl;
      }
};
int main(){
      student per1(631,21);
      student per2(per1);
}