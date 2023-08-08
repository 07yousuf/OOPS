#include<iostream>
using namespace std;
class construct{
  public:
  int a,b;
  construct(){ // Default constructor -no arguments pass
      a=5;
      b=6;
  }
  construct(int x,int y){// parameterised constructor -arguments pass
      a=x;
      b=y;
  }
  construct(construct& obj){// copy constructor - initialise an object by a another existing object
      a=obj.a;
      b=obj.b;
  }


};
int main(){
      construct obj1;
      cout<<obj1.a<<" "<<obj1.b;

      construct obj2(7,8);
      cout<<obj2.a<<" "<<obj2.b;

      construct obj3=obj2;
      cout<<obj3.a<<" "<<obj3.b;

}