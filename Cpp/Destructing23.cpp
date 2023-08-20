#include<bits/stdc++.h>
using namespace std;
class sample{
      int i;
      public:
      sample(int a){
            i=a;
            cout<<"constructing"; 
      }
      ~sample(){
            cout<<"destructing";
      }
      int get_t(){
            return i;
      }
};
int func(sample obj){
      int result = obj.get_t() * obj.get_t();
      return result;
}
int main(){
      int num;
      cin>>num;
      sample r1(num);
      cout<<func(r1)<<endl;

}