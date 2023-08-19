#include<bits/stdc++.h>
using namespace std;
class sample {
      int a;
      public:
      sample(int x){
            a=x;
      }
      long get_t(){
            return  a;
      }
};
void sample2(sample obj){
      long X;
      X= obj.get_t() * obj.get_t();
      cout<<X<<endl;
}

int main(){
      long num;
      cin>>num;
      sample r1(num);
      sample2(r1); //pass by value
      cout<<r1.get_t()<<endl;

}