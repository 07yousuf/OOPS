#include<bits/stdc++.h>
using namespace std;
class Human{
      int age;
      string phylosopy,character;
      public:
      void set(int a,string b,string c){
            age = a;
            phylosopy = b;
            character = c;
      }
      void show(){
            cout<<age<<endl<<phylosopy<<endl<<character<<endl;

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

int main(){
      cout<<"Info of a male- \n";
      Male object1;
      object1.set(21,"natural","good");
      object1.show();
      object1.set1("short_hair");
      cout<<object1.get1()<<endl;
      cout<<"Info of a Female- \n";
      Female object2;
      object2.set(30,"natural","good");
      object2.show();
      object2.set2("long_hair");
      cout<<object2.get2()<<endl;

}