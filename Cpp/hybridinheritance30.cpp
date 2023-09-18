//Here - combination of multiple inheritance & hierarchical inheritance
#include<bits/stdc++.h>
using namespace std;
class Human{
      int age;
      string philosophy,character;
      public:
      void set(int a,string b,string c){
            age = a;
            philosophy = b;
            character = c;
      }
      void show(){
            cout<<age<<endl<<philosophy<<endl<<character<<endl;

      }
};

class Male: public Human{
      string hair;
      public:
      void set1(string a){
            hair = a;
      }
      string get1(){
            return hair;
      }
};

class Female: public Human{
      string hair;
      public:
      void set2(string b){
            hair =b;
      }
      string get2(){
            return hair;
      }
};

class NonBeliever{
      public:
      void show(){
            cout<<"an atheist"<<endl;;
      }
};

class Faminist: public Human, public NonBeliever{
      public:
      string complement;
      void show(){
            cout<<"majority of nonbeliever people are faminist"<<endl;
      }
};
int main(){
      cout<<"Info of a male- \n";
      Male object1;
      object1.set(21,"natural","good");
      object1.Human::show(); //Inheritance ambiguity
      object1.set1("short_hair");
      cout<<object1.get1()<<endl;
      cout<<"Info of a Female- \n";
      Female object2;
      object2.set(21,"natural","good");
      object2.show();
      object2.set2("long_hair");
      cout<<object2.get2()<<endl;
      cout<<"Info of others-\n";
      Faminist object3;
      object3.set(30,"faminist","not_bad");
      object3.Human::show();
      object3.NonBeliever::show();// Inheritance ambiguity
      object3.Faminist::show();// Inheritance ambiguity
}