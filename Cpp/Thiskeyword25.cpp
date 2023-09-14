#include<bits/stdc++.h>
using namespace std;
class Employe{
      int id;
      long salary;
      string name;
      public:
      Employe(int id,string name,long salary){
            this -> id = id;
            this -> name = name;
            this -> salary = salary;
      }
      void show(){
            cout<<id<<endl<<name<<endl<<salary<<endl;
      }
};
int main(){
      //using dynamic object
      Employe *r1 = new Employe(631,"Yousuf",0);
      Employe *r2 = new Employe(489,"Asif",0);
      r1->show();
      cout<<"2nd Employe Info:- \n";
      r2->show();
}