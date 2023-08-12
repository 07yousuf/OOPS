#include<bits/stdc++.h>
class organic{
      private:
      char level;
      public:
      int health;

      char getlevel(){
            return level;
      }

      void setlevel(char ch){
            level = ch;
      }
};
int main(){
      organic yousuf;
      yousuf.health=21;
      yousuf.setlevel('A');
      std::cout<<"Health is: "<<yousuf.health<<std::endl;
      std::cout<<"Level is: "<<yousuf.getlevel();

}