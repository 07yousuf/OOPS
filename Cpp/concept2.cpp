#include<iostream>
#include<cstring>
using namespace std;
class health{
      public:      
      int health;
      string level;

};
int main(){
      health luqman;
      luqman.health=55;
      luqman.level="One";
      cout<<"Health is:"<<luqman.health<<endl;
      cout<<"health level is:"<<luqman.level;

}
