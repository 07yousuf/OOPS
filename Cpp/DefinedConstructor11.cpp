#include<bits/stdc++.h>
using namespace std;
int n;
class student {
      char name[18];
      int id,fee;
      float age;
      public:
      void input (){
            cin >> name >> id >> fee >> age;
      }
      void print() {
        cout << name <<endl<< id <<endl<< fee <<endl<< age<<endl;
}

};
int main(){
      cout << "Enter the number of students: ";
      cin>>n;
      student p1[n];
      for(int i=0; i<n; i++){
            p1[i].input();
      }
      cout << "Details of all students:\n" << endl;
      for(int i=0; i<n; i++){
            p1[i].print();
      }

      return 0;
}



