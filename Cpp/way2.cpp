#include<iostream>
using namespace std;
class sample {
      public:
      int x,y;
      int sum(int x, int y){
            int sum = x+y;
            return sum;
      }
};
int main(){
      sample *obj1 = new sample();
      cin>>obj1->x>>obj1->y;

      cout<<obj1->x<<endl<<obj1->y<<endl<<obj1->sum(obj1->x,obj1->y);
}