#include<bits/stdc++.h>
using namespace std;
class CSE{
      string NAME,ID;
      double CGPA;
      public:
      void Sett(){
            cin>>NAME>>ID>>CGPA;
      }
      void show(){
            cout<<NAME<<endl<<ID<<endl<<CGPA<<endl;
      }
};
int main(){
      CSE r1[10];
      for(int i=0; i<10; i++){
            r1[i].Sett();
      }
      for(int i=0; i<10; i++){
            cout<<"Student:"<<i+1<<" Info -"<<endl;
            r1[i].show();
      }


}